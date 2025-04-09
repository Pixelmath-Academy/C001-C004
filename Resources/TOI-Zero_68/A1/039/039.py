n = int(input())
a = [0] * (n + 1)

if n == 1 or n == 0:
    print(1)
else:
    a[1] = 1
    for i in range(2, n + 1):
        a[i] = a[i - 1] * i
    print(a[n])

n = int(input())
r = 1
for i in range(2, n+1):
    r *= i
print(r)
