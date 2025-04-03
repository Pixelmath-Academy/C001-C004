w, h = map(int, input().split())
m, n = map(int, input().split())

x = [0] * (m + 2)
y = [0] * (n + 2)
x[0] = 0
x[m + 1] = w
y[0] = 0
y[n + 1] = h

for i in range(1, m + 1):
    x[i] = int(input())
for i in range(1, n + 1):
    y[i] = int(input())

widths = []
heights = []

for i in range(m + 1):
    widths.append(x[i + 1] - x[i])
for i in range(n + 1):
    heights.append(y[i + 1] - y[i])

areas = []
for width in widths:
    for height in heights:
        areas.append(width * height)

areas.sort(reverse=True)
print(areas[0], end=" ")
if len(areas) > 1:
    print(areas[1])
else:
    print(areas[0]) 