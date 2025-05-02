s = input()
b = 0
count = 0
mx = 0
bu = 0

for i in range(len(s)):
    e = s[i]
    if e.upper() == 'B':
        b = 1
        bu = 1
        count = 0
    elif e.upper() == 'U' and bu:
        count += 1
        mx = max(mx, count)
    else:
        count = 0
        bu = 0

if mx > 0:
    print("Yes", mx)
elif b:
    fb = 0
    for i in range(len(s)):
        e = s[i]
        if not fb:
            print(e, end="")
        else:
            print('U', end="")
        if e.lower() == 'b':
            fb = 1
else:
    A = ['B', 'U', 'U']
    for i in range(len(s)):
        print(A[i % 3], end="") 