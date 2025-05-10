n, k = map(int, input().split())

a = [0] * (n + 1)
p = [0] * (n + 1)

a[1:] = list(map(int, input().split()))

for i in range(1, n + 1):
    p[i] = max(a[i - 1], p[i - 1])

x = list(map(int, input().split()))

for idx in x:
    if p[idx] >= a[idx]:
        print(p[idx] - a[idx] + 1)
    else:
        print(0) 
