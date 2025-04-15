m, n = map(int, input().split())
events = []

for i in range(n):
    l, r = map(int, input().split())
    events.append((l, 1))
    events.append((r + 1, -1))

events.sort()
mx = 0
count = 0

for i in range(len(events)):
    idx, k = events[i]
    count += k
    
    if i < len(events) - 1 and idx == events[i + 1][0]:
        continue
        
    mx = max(mx, count)

print(mx) 