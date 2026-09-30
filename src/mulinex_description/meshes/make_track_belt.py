"""Generate the visual track-belt meshes (track_belt_left.stl, track_belt_right.stl).

The belt wraps the four wheels of one track and passes over the ankle structure mesh
(body_left.stl / body_right.stl): its profile is the convex hull of the wheel circles and of
the structure outline in the track-body y-z plane, extruded across the wheel width along x,
with rubber lugs on the outer surface. Coordinates are in the body_left_* / body_right_* link frames
(wheel centers and widths as in track.xacro). Visual only: collisions are unchanged.

Run from this folder:  python3 make_track_belt.py
"""
import math
import struct

import numpy as np

# wheel centers (y, z) in the track-body frame, wheels 1..4 (4 = raised idler)
CENTERS = {
    'left': [(0.0484063, -0.0583795), (0.0, -0.0583795), (-0.0510313, -0.0583795), (-0.0766777, -0.0417374)],
    'right': [(0.0583795, 0.0484062), (0.0583795, 0.0), (0.0583795, -0.0510312), (0.0417374, -0.0766777)],
}
# belt width along the body x axis: left wheels extend to +x, right wheels to -x (45 mm);
# the belt is 0.5 mm wider on each side so its edges do not coincide with the wheel faces
X_RANGE = {'left': (-0.0005, 0.0455), 'right': (-0.0455, 0.0005)}

R_IN = 0.0128      # belt inner surface, around each wheel center [m]
R_OUT = 0.0158     # belt outer surface (clear of the 15 mm wheels, no z-fighting)
STRUCT_GAP = 0.001  # clearance between the belt and the ankle structure
LUG_H = 0.0012     # rubber lug height
LUG_LEN = 0.004    # lug length along the belt
LUG_PITCH = 0.009  # lug spacing along the belt
LUG_MARGIN = 0.001  # lug inset from the belt edges
N_PHI = 720        # outline resolution


def load_stl(fn):
    f = open(fn, 'rb').read()
    n = struct.unpack('<I', f[80:84])[0]
    d = np.frombuffer(f[84:84 + n * 50], dtype=np.dtype([('n', '<3f4'), ('v', '<9f4'), ('a', '<u2')]))
    return d['v'].reshape(-1, 3).astype(float)


def rpy(r, p, y):
    cr, sr, cp, sp, cy, sy = math.cos(r), math.sin(r), math.cos(p), math.sin(p), math.cos(y), math.sin(y)
    return (np.array([[cy, -sy, 0], [sy, cy, 0], [0, 0, 1]]) @ np.array([[cp, 0, sp], [0, 1, 0], [-sp, 0, cp]])
            @ np.array([[1, 0, 0], [0, cr, -sr], [0, sr, cr]]))


# ankle structure mesh and its visual rotation in the track-body frame (as in track.xacro)
STRUCT = {'left': ('body_left.stl', (0.0, 0.0, 3.14159)), 'right': ('body_right.stl', (-1.5708, 0.0, -3.14159))}


def structure_yz(side):
    fn, r = STRUCT[side]
    v = load_stl(fn) @ rpy(*r).T
    return v[:, 1:]


def outline(parts):
    """Hull of a set of discs, parameterized by outward normal angle.
    parts: list of (points Nx2, radius); every point is a disc center with that radius."""
    pts = []
    for phi in np.linspace(0, 2 * np.pi, N_PHI, endpoint=False):
        n = np.array([math.cos(phi), math.sin(phi)])
        best = None
        for c, r in parts:
            k = int(np.argmax(c @ n))
            cand = c[k] + r * n
            if best is None or cand @ n > best @ n:
                best = cand
        pts.append(best)
    return np.array(pts)


def dedup(p, eps=1e-7):
    keep = [0] + [i for i in range(1, len(p)) if np.linalg.norm(p[i] - p[i - 1]) > eps]
    return p[keep]


def resample(poly, step):
    """Closed polyline -> points every `step` along its length."""
    seg = np.roll(poly, -1, axis=0) - poly
    L = np.linalg.norm(seg, axis=1)
    s = np.concatenate([[0], np.cumsum(L)])
    out = []
    for t in np.arange(0, s[-1], step):
        i = int(np.searchsorted(s, t, side='right') - 1)
        f = (t - s[i]) / L[i]
        out.append((poly[i] + f * seg[i], seg[i] / L[i]))
    return out, s[-1]


def quad(tris, a, b, c, d, out):
    """Two triangles for quad a-b-c-d, wound so that their normal points along `out`."""
    if np.dot(np.cross(b - a, c - a), out) < 0:
        a, b, c, d = a, d, c, b
    tris += [(a, b, c), (a, c, d)]


def to3d(yz, x):
    return np.array([x, yz[0], yz[1]])


def belt(side):
    centers = CENTERS[side]
    x0, x1 = X_RANGE[side]
    c, st = np.array(centers), structure_yz(side)
    thick = R_OUT - R_IN
    outer = outline([(c, R_OUT), (st, STRUCT_GAP + thick)])
    inner = outline([(c, R_IN), (st, STRUCT_GAP)])
    tris = []
    n = len(outer)
    ex = np.array([1.0, 0.0, 0.0])
    for i in range(n):
        j = (i + 1) % n
        o0, o1, i0, i1 = outer[i], outer[j], inner[i], inner[j]
        phi = 2 * math.pi * (i + 0.5) / n
        radial = np.array([0.0, math.cos(phi), math.sin(phi)])
        quad(tris, to3d(o0, x0), to3d(o1, x0), to3d(o1, x1), to3d(o0, x1), radial)     # outer surface
        quad(tris, to3d(i0, x1), to3d(i1, x1), to3d(i1, x0), to3d(i0, x0), -radial)    # inner surface
        quad(tris, to3d(i0, x0), to3d(i1, x0), to3d(o1, x0), to3d(o0, x0), -ex)        # side x0
        quad(tris, to3d(o0, x1), to3d(o1, x1), to3d(i1, x1), to3d(i0, x1), ex)         # side x1
    # rubber lugs: small boxes on the outer surface
    samples, length = resample(dedup(outer), LUG_PITCH)
    c = np.mean(np.array(centers), axis=0)
    for p, t in samples:
        nrm = np.array([t[1], -t[0]])
        if np.dot(nrm, p - c) < 0:
            nrm = -nrm
        a, b = p - t * LUG_LEN / 2, p + t * LUG_LEN / 2
        A, Bp = a + nrm * LUG_H, b + nrm * LUG_H
        xa, xb = x0 + LUG_MARGIN, x1 - LUG_MARGIN
        v = [to3d(a, xa), to3d(b, xa), to3d(Bp, xa), to3d(A, xa),
             to3d(a, xb), to3d(b, xb), to3d(Bp, xb), to3d(A, xb)]
        ctr = sum(v) / 8
        for f in ((0, 3, 2, 1), (4, 5, 6, 7), (3, 7, 6, 2), (0, 1, 5, 4), (1, 2, 6, 5), (0, 4, 7, 3)):
            q = [v[k] for k in f]
            quad(tris, *q, sum(q) / 4 - ctr)
    return tris, length, len(samples)


def write_stl(fn, tris):
    with open(fn, 'wb') as f:
        f.write(b'traquad track belt'.ljust(80, b' '))
        f.write(struct.pack('<I', len(tris)))
        for a, b, c in tris:
            nrm = np.cross(b - a, c - a)
            ln = np.linalg.norm(nrm)
            nrm = nrm / ln if ln > 0 else nrm
            f.write(struct.pack('<12fH', *nrm, *a, *b, *c, 0))


if __name__ == '__main__':
    for side in ('left', 'right'):
        tris, length, lugs = belt(side)
        write_stl(f'track_belt_{side}.stl', tris)
        print(f'track_belt_{side}.stl: {len(tris)} triangles, belt length {length * 1000:.0f} mm, {lugs} lugs')
