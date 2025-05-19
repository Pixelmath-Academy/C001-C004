n = int(input())
a = input()
b = input()

cnt = 0
for i in range(n):
    if int(a[i]) + int(b[i]) == 9:
        cnt += 1

if cnt == n:
    print("YES")
else:
    print("NO", n - cnt)