a = input().strip()

if not a:
    exit()

c = 1
for i in range(1, len(a)):
    if a[i] == a[i - 1]:
        c = c + 1
    else:
        print(f"{c}{a[i - 1]}", end="")
        c = 1

print(f"{c}{a[-1]}")