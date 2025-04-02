n = int(input())
s = str(n)
length = len(s)
for i in range(length):
    print(s[i], end="")
    if length - i == 4:
        print(",", end="")
