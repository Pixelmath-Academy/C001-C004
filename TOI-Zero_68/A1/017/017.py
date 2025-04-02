a1 = int(input())
b1 = int(input())
c1 = int(input())
a2 = int(input())
b2 = int(input())
c2 = int(input())
if a1 == a2 and b1 == b2 and c1 == c2:
    print(0)
elif a1 > a2:
    print(2)
elif a2 > a1:
    print(1)
elif b2 > b1:
    print(1)
elif b1 > b2:
    print(2)
elif c2 > c1:
    print(1)
else:
    print(2)
