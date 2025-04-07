color = ["Red", "Green", "Blue"]
k, n = input().split()
n = int(n)

if k == 'R':
    st = 0
elif k == 'G':
    st = 1
else:
    st = 2

for i in range(n):
    print(color[(st + i) % 3], end=" ") 