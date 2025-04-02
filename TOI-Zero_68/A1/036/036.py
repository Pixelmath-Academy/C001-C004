n = int(input())
if n < 0:
    if n % 10 != 0:
        n -= n % 10
    while n <= 0:
        print(n, end=" ")
        n += 10
else:
    if n % 10 != 0:
        n -= n % 10
    while n >= 0:
        print(n, end=" ")
        n -= 10
