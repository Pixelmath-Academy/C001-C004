from collections import defaultdict

adj = defaultdict(list)
ans = 0

def dfs(u):
    global ans
    mx = 0
    a = []
    
    for t, v in adj[u]:
        if t == 1:
            a.append(v)
        else:
            a.append(dfs(v))
    
    ans += abs(a[0] - a[1])
    return 2 * max(a[0], a[1])

n = int(input())
x = []

for i in range(1, n + 1):
    a, l, b, r = map(int, input().split())
    adj[i].append((a, l))
    adj[i].append((b, r))
    if a:
        x.append(l)
    if b:
        x.append(r)

dfs(1)
print(ans) 