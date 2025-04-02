c = input().strip()
s = input().strip()

if c == 'H' and s == "4567":
    print("safe unlocked")
elif s == "4567":
    print("safe locked - change char")
elif c == 'H':
    print("safe locked - change digit")
else:
    print("safe locked")
