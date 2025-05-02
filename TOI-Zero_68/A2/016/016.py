x, a, y, b = input().split()
k = 0

# Reverse strings
a = a[::-1]
b = b[::-1]

# Count matching characters from the end
while k < 5 and k < len(a) and k < len(b) and a[k] == b[k]:
    k += 1

# Determine prize based on conditions
if x == y and k == 5:
    print(1000000)
elif k == 5:
    print(100000)
elif k >= 3 and x == y:
    print(2000)
elif k >= 2 and x == y:
    print(1000)
elif k >= 3:
    print(200)
elif k >= 2:
    print(100)
elif x == y:
    print(20)
else:
    print(0) 