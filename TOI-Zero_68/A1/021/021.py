a = int(input())
if a % 400 == 0 or a == 1500:
    print("yes")
elif a % 100 == 0:
    print("no")
elif a % 4 == 0:
    print("yes")
else:
    print("no")
