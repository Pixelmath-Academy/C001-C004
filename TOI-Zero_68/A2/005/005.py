data = list(map(int, input().split()))
w, h = data[0], data[1]
m, n = data[2], data[3]

x = list(map(int, input().split()))
x = [0] + x + [w]

y = list(map(int, input().split()))
y = [0] + y + [h]

x.sort()
y.sort()

widths = [x[i+1] - x[i] for i in range(len(x) - 1)]
heights = [y[i+1] - y[i] for i in range(len(y) - 1)]

areas = [w * h for w in widths for h in heights]

areas.sort(reverse=True)

if len(areas) == 1:
    print(areas[0], areas[0])
else:
    print(areas[0], areas[1])
