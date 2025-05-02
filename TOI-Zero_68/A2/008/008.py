n = int(input())
cars = []

for i in range(n):
    x, y = map(int, input().split())
    cars.append((x, y))

cars.sort()  # Sort by x-coordinate

count = 0
for i in range(1, n):
    if cars[i][1] < cars[i-1][1]:
        count += 1
    cars[i] = (cars[i][0], max(cars[i][1], cars[i-1][1]))

print(count) 