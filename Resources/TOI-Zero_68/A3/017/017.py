w, l, m, n = map(int, input().split())
mn = n * m

for i in range(m, n + 1):
    mn = min(mn, (w % i) * (l % i))

print(mn) 