n = int(input())
points = []
xx = []
yy = []

for i in range(n):
    x, y = map(int, input().split())
    xk = x + y
    yk = y - x
    points.append((xk, yk))
    xx.append(xk)
    yy.append(yk)

xx.sort()
yy.sort()
sx = xx[n//2]
sy = yy[n//2]

ans = 0
for x, y in points:
    ans += abs(x - sx) + abs(y - sy)

print(ans) 