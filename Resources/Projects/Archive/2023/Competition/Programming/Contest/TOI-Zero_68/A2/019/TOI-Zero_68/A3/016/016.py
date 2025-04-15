from collections import deque

n, m = map(int, input().split())
adj = [[] for _ in range(n+1)]
deg = [[] for _ in range(n+1)]

for _ in range(m):
    k = int(input())
    a = set()
    for _ in range(k):
        x = int(input())
        a.add(x)
    s = int(input())
    for x in a:
        adj[x].append(s)
    deg[s].append(a)

count = 0
visited = [0] * (n+1)
q = deque([1])

while q:
    u = q.popleft()
    if visited[u]:
        continue
    visited[u] = 1
    count += 1
    
    for v in adj[u]:
        mn = float('inf')
        for s in deg[v]:
            if not s:
                mn = 0
                continue
            if u not in s:
                continue
            s.remove(u)
            mn = min(mn, len(s))
        
        if mn == 0:
            q.append(v)

print(count) 