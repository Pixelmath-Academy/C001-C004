n = int(input())
a = [0] * 360

for _ in range(n):
    l, r = map(int, input().split())
    j = l
    while j != r:
        a[j] = 1
        j = (j + 1) % 360

count = sum(a)
if count == 360:
    print(360)
    exit()

visited = [0] * 360
mx = 0

for i in range(360):
    if visited[i] or not a[i]:
        continue
    
    l = r = i
    while a[(l - 1) % 360]:
        l = (l - 1) % 360
        visited[l] = 1
    
    while a[(r + 1) % 360]:
        r = (r + 1) % 360
        visited[r] = 1
    
    mx = max(mx, (r - l + 360 + 1) % 360)

print(mx) 