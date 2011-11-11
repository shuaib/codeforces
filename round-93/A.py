from math import sqrt
n, k = [int(x) for x in raw_input().split()]

pts = []
for i in range(n):
    x, y = raw_input().split()
    pts.append((int(x), int(y)))

d = 0
for i in xrange(1, len(pts)):
    dx = pts[i][0]-pts[i-1][0]
    dy = pts[i][1]-pts[i-1][1]
    d += sqrt((dx*dx) + (dy*dy))

totdist = d*k
print totdist/50.0
