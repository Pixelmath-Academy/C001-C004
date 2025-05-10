n, m = map(int, input().split())

red = [0] + list(map(int, input().split()))
blue = [0] + list(map(int, input().split()))

count = 0

for i in range(n):
    for j in range(m):
        if (i % 2) == (j % 2):
            cond = (red[i] < blue[j] and red[i+1] > blue[j+1]) or \
                   (red[i] > blue[j] and red[i+1] < blue[j+1])
        else:
            cond = (red[i] < blue[j+1] and red[i+1] > blue[j]) or \
                   (red[i+1] > blue[j] and red[i] < blue[j+1])
        count += cond

for i in range(n + 1):
    start = i % 2
    for j in range(start, m + 1, 2):
        if red[i] == blue[j]:
            count += 1

print(count)
