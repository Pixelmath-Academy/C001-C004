n = int(input())
orders = []
mp1 = {}
mp2 = {}

for i in range(n):
    x, y = map(int, input().split())
    orders.append((x, y))
    
    key1 = x - y
    if key1 not in mp1:
        mp1[key1] = []
    mp1[key1].append(x)
    
    key2 = 1000000000 - x - y
    if key2 not in mp2:
        mp2[key2] = []
    mp2[key2].append(x)

mx = 0
for key in mp1:
    x_list = mp1[key]
    x_list.sort()
    mx = max(mx, x_list[-1] - x_list[0])

for key in mp2:
    x_list = mp2[key]
    x_list.sort()
    mx = max(mx, x_list[-1] - x_list[0])

print(mx) 