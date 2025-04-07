visited = {}
ans = []

for i in range(10):
    x = int(input())
    if x not in visited:
        visited[x] = 1
        ans.append(x)

for i in range(len(ans)):
    print(ans[i], end=" ") 