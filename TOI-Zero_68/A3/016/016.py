from collections import deque

def main():
    n, m = map(int, input().split())
    
    adj = [[] for _ in range(n + 1)]
    deg = [{} for _ in range(n + 1)] 
    
    for _ in range(m):
        parts = list(map(int, input().split()))
        k = parts[0]
        a = set(parts[1:k+1])
        s = parts[k+1]
        
        for x in a:
            adj[x].append(s)
        
        if not deg[s]:
            deg[s] = []
        deg[s].append(a.copy())
    
    visited = [False] * (n + 1)
    q = deque()
    q.append(1)
    visited[1] = True
    count = 1
    
    while q:
        u = q.popleft()
        
        for v in adj[u]:
            for prereq_set in deg[v]:
                if u in prereq_set:
                    prereq_set.remove(u)
                    if not prereq_set:
                        if not visited[v]:
                            visited[v] = True
                            count += 1
                            q.append(v)
                            deg[v].remove(prereq_set)  # No longer need this requirement
    
    print(count)

if __name__ == "__main__":
    main()
