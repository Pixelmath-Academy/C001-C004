a = int(input())
b = input().strip().upper()
c = float(a)
if b == 'F':
    c = (a - 32) * 5.0 / 9.0

if c <= 0:
    print("solid")
elif c < 100:
    print("liquid")
else:
    print("gas")
