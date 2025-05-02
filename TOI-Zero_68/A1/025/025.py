s = input().upper()
if s[0].isdigit():
    if len(s) >= 3 and s[0] == '1' and s[1] == '0':
        a = "10"
        b = s[2:]
    else:
        a = s[0]
        b = s[1:]
else:
    a = s[0]
    b = s[1:]

if a == "A":
    c = "ace"
elif a == "J":
    c = "jack"
elif a == "Q":
    c = "queen"
elif a == "K":
    c = "king"
else:
    c = a

if b == "D":
    d = "diamonds"
elif b == "H":
    d = "hearts"
elif b == "S":
    d = "spades"
elif b == "C":
    d = "clubs"

print(f"{c} of {d}")

