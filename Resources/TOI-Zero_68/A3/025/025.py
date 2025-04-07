n, w, l = map(int, input().split())
a = [[0] * (w + 1) for _ in range(n)]

for i in range(n):
    c = int(input())
    for _ in range(c):
        k = int(input())
        a[i][k] = 1

for i in range(1, w + 1):
    check = 1
    for j in range(n):
        kk = 0
        for k in range(max(1, i - l), min(w + 1, i + l + 1)):
            kk = max(kk, a[j][k])
        check = min(check, kk)
    
    if check:
        print(1)
        exit()

print(0) 