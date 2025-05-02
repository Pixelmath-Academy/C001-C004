a = 0
while True:
    n = int(input())
    if n == 5:
        break
    if n == 1:
        a += 100
    elif n == 2:
        a += 120
    elif n == 3:
        a += 200
    elif n == 4:
        a += 60

print("Bye Bye")
print("Total Calories:", a)
