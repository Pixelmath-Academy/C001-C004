n = int(input())
v = []

for i in range(1, 201):
    for j in range(1, 10):
        v.append(2 * i)
    v.append(i)

a = list(map(int, input().split()))
a.sort(reverse=True)

ans = 0
for i in range(n):
    ans += a[i] * v[i]

print(ans) 