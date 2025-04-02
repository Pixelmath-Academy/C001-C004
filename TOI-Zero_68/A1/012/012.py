s = input().strip()
c = input().strip()

a1 = int(s)
a2 = int(s[::-1])

if c == '+':
    print(f"{a1} + {a2} = {a1 + a2}")
else:
    print(f"{a1} * {a2} = {a1 * a2}")