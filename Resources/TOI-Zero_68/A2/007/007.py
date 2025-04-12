n, m = map(int, input().split())

adj = [[] for _ in range(n + 1)]
co = [0] * (n + 1)
dep = [0] * (n + 1)
par = list(range(n + 1))

a = [None] * (n + 1)
for i in range(1, n + 1):
    x, y = map(int, input().split())
    a[i] = (x, y)

for i in range(1, n + 1):
    for j in range(i + 1, n + 1):
        if a[j][1] > a[i][1]:
            break
        else:
            par[j] = i

for i in range(1, n + 1):
    if i != par[i]:
        adj[par[i]].append(i)

for _ in range(m):
    x = int(input())
    co[x] = 1

def dfs(u):
    for v in adj[u]:
        dep[v] = dep[u] + 1
        dfs(v)
        co[u] += co[v]

def dfs2(u, mx):
    if co[u] != mx:
        return -1, -1
    a = u
    b = dep[u]
    for v in adj[u]:
        x, y = dfs2(v, mx)
        if x == -1:
            continue
        if y > b:
            a = x
            b = y
    return a, b

ans = []
for i in range(1, n + 1):
    if par[i] == i:
        dfs(i)
        if co[i] == 0:
            continue
        a, _ = dfs2(i, co[i])
        ans.append(a)

print(len(ans))
ans.sort()
print(*ans)
