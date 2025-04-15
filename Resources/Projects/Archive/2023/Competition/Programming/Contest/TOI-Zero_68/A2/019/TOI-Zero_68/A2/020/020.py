n = int(input())
pass_arr = [0] * (n + 1)
visited = [0] * (n + 1)
mx = 0

for i in range(1, n + 1):
    pass_arr[i] = int(input())
    visited[i] = 0

for i in range(1, n + 1):
    if not visited[i]:
        x = i
        count = 0
        while x != i or count == 0:
            visited[x] = 1
            count += 1
            x = pass_arr[x]
        mx = max(mx, count)

print(mx) 