n = int(input())
mp = {}
count = 0

for i in range(n):
    x = int(input())
    if x in mp:
        mp[x] += 1
    else:
        mp[x] = 1
    count = max(count, mp[x])

print(count) 