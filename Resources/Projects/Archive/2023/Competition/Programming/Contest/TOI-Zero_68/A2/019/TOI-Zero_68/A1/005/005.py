a = int(input())
b = int(input())
if a == 1 or a == 2 or (a == 3 and b < 21):
    print("winter")
elif (a == 3 and b >= 21) or a == 4 or a == 5 or (a == 6 and b < 21):
    print("spring")
elif (a == 6 and b >= 21) or a == 7 or a == 8 or (a == 9 and b < 21):
    print("summer")
elif (a == 9 and b >= 21) or a == 10 or a == 11 or (a == 12 and b < 21):
    print("fall")
else:
    print("winter")

    