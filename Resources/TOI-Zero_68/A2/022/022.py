l, n = map(int, input().split())
bridge = []

for i in range(n):
    left, right = map(int, input().split())
    bridge.append((left, 1))
    bridge.append((right, -1))

count = 0
mx = 0
bridge.sort()

for i in range(len(bridge)):
    idx = bridge[i][0]
    k = bridge[i][1]
    count += k
    
    if i < len(bridge) - 1 and bridge[i+1][0] == idx:
        continue
    
    mx = max(mx, count)

print(mx) 