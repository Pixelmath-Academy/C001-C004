a = int(input())
b = int(input())
if a <= 1990:
    if b <= 1500:
        print(1250)
    elif b <= 2000:
        print(1400)
    else:
        print(2000)
elif 1991 <= a <= 1999:
    if b <= 1500:
        print(1100)
    elif b <= 2000:
        print(1300)
    else:
        print(1700)
else:  # a >= 2000
    if b <= 1500:
        print(1000)
    elif b <= 2000:
        print(1200)
    else:
        print(1500)
