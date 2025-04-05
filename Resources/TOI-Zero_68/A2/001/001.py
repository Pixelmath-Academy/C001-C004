n, m = map(int, input().split())
red = [0] * (n + 1)
blue = [0] * (m + 1)

for i in range(1, n + 1):
    red[i] = int(input())
for i in range(1, m + 1):
    blue[i] = int(input())

count = 0
for i in range(n):
    for j in range(m):
        if i % 2 == j % 2:
            count += ((red[i] < blue[j] and red[i+1] > blue[j+1]) or 
                     (red[i] > blue[j] and red[i+1] < blue[j+1]))
        else:
            count += ((red[i] < blue[j+1] and red[i+1] > blue[j]) or 
                     (red[i+1] > blue[j] and red[i] < blue[j+1]))

for i in range(n + 1):
    for j in range(i % 2, m + 1, 2):
        count += red[i] == blue[j]

print(count) 