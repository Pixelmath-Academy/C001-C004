n, l = map(int, input().split())
a = []

for _ in range(n):
    second, first = map(int, input().split())
    a.append((first, second))

a.sort()
count = 0
idx = -1

for r, l in a:
    if l <= idx:
        continue
    count += 1
    idx = r

print(count) 