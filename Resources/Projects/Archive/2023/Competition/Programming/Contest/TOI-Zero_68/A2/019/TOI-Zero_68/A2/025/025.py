n, m = map(int, input().split())
a = [[0] * m for _ in range(n)]
sx, sy, k = map(int, input().split())

for _ in range(k):
    x, y = map(int, input().split())
    a[x][y] = 100
    
    for i in range(max(0, x-1), min(n, x+2)):
        for j in range(max(0, y-1), min(m, y+2)):
            a[i][j] = max(a[i][j], 60)
    
    for i in range(max(0, x-2), min(n, x+3)):
        for j in range(max(0, y-2), min(m, y+3)):
            a[i][j] = max(a[i][j], 20)

count = sum(1 for i in range(n) for j in range(m) if a[i][j] == 0)
print(count)
print(f"{a[sx][sy]}%") 