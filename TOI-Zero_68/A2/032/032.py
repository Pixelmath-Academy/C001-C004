n, m = map(int, input().split())

arr = [[0 for _ in range(m + 3)] for _ in range(n + 3)]

q = int(input())
for _ in range(q):
    a, b = map(int, input().split())
    arr[a + 1][b + 1] += 1

ma = 0

for i in range(1, n + 1):
    for j in range(1, m + 1):
        if arr[i][j] >= 1:
            continue
        ma = max(ma, arr[i][j] + arr[i - 1][j] + arr[i + 1][j] +
                 arr[i][j - 1] + arr[i][j + 1] +
                 arr[i - 1][j - 1] + arr[i + 1][j - 1] +
                 arr[i - 1][j + 1] + arr[i + 1][j + 1])

print(ma)