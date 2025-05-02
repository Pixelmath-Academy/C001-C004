n, q = map(int, input().split())

a = []
d = 0
id = 0

for _ in range(n):
    k, kk = map(int, input().split())
    d += k
    left = id
    id += kk
    right = id
    a.append((d, left, right))

a.append((0, id, float('inf')))

stack = [(0, 0, 0)]
mp = {}

for h, l, r in a:
    while stack and stack[-1][0] >= h:
        H, L, R = stack.pop()
        width = R - L
        mp[width] = max(mp.get(width, 0), H)
        l = L
    stack.append((h, l, r))

v = sorted((length, height) for length, height in mp.items())
v.append((float('inf'), 0))

for i in range(len(v) - 2, -1, -1):
    v[i] = (v[i][0], max(v[i][1], v[i+1][1]))

from bisect import bisect_left

for _ in range(q):
    x = int(input())
    idx = bisect_left(v, (x, float('-inf')))
    print(v[idx][1])
