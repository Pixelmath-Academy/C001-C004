n = int(input())
p = [0] * (n + 1)
for i in range(1, n + 1):
    p[i] = int(input()) + p[i-1]

k = set()
for i in range(1, n + 1):
    for j in range(i, n + 1):
        k.add(p[j] - p[i-1])

print(len(k)) 