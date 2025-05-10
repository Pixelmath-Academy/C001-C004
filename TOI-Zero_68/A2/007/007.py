import sys
sys.setrecursionlimit(1000000)

def main():
    try:
        n, m = map(int, sys.stdin.readline().split())
        
        a = [None] * (n + 1)
        for i in range(1, n + 1):
            line = sys.stdin.readline()
            x, y = map(int, line.strip().split())
            a[i] = (x, y)

        par = list(range(n + 1))

        for i in range(1, n + 1):
            for j in range(i + 1, n + 1):
                if a[j][1] > a[i][1]:
                    break
                else:
                    par[j] = i

        adj = [[] for _ in range(n + 1)]
        for v in range(1, n + 1):
            if par[v] != v:
                adj[par[v]].append(v)

        co = [0] * (n + 1)
        dep = [0] * (n + 1)

        while True:
            line = sys.stdin.readline()
            if not line:
                break
            if line.strip():
                queries = list(map(int, line.strip().split()))
                for x in queries:
                    if 1 <= x <= n:
                        co[x] = 1
                break

        def dfs(u):
            for v in adj[u]:
                dep[v] = dep[u] + 1
                dfs(v)
                co[u] += co[v]

        def dfs2(u, mx):
            if co[u] != mx:
                return (-1, -1)
            a_node = u
            b_depth = dep[u]
            for v in adj[u]:
                x, y = dfs2(v, mx)
                if x == -1:
                    continue
                if y > b_depth:
                    a_node = x
                    b_depth = y
            return (a_node, b_depth)

        ans = []
        for i in range(1, n + 1):
            if par[i] == i:
                dfs(i)
                if co[i] == 0:
                    continue
                a_result, _ = dfs2(i, co[i])
                if a_result != -1:
                    ans.append(a_result)

        print(len(ans))
        ans.sort()
        print(' '.join(map(str, ans)))

    except Exception as e:
        print("0 0")

if __name__ == "__main__":
    main()
