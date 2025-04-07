n, k = map(int, input().split())
rb = mn = fr = 0
a, b, c = map(int, input().split())

for _ in range(k):
    x, y = map(int, input().split())
    if x % a == 0:
        rb += y
    if x % b == 0:
        mn += y
    if x % c == 0:
        fr += y

mx = max(rb, mn, fr)
if rb == mx:
    print("Rabbit", rb)
if mn == mx:
    print("Monkey", mn)
if fr == mx:
    print("Frog", fr) 