n, x = map(int, input().split())
a = [0] * (n + 1)
for i in range(1, n + 1):
    a[i] = int(input())

visited = [0] * (n + 1)
count = 0

while x > 0 and not visited[x]:
    visited[x] = 1
    count += 1
    x = a[x]

print(count) 