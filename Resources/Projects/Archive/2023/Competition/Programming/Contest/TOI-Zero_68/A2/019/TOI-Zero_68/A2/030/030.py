arr = []
for i in range(5):
    row = input().split()
    arr.append([int(num) for num in row])

x, y = -1, -1

for i in range(5):
    row_sum = 0
    for j in range(5):
        row_sum += arr[i][j]
    if row_sum % 2 != 0:
        x = i
        break

for i in range(5):
    col_sum = 0
    for j in range(5):
        col_sum += arr[j][i]
    if col_sum % 2 != 0:
        y = i
        break

print(x, y)