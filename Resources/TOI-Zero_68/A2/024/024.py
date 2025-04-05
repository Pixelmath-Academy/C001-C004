def min_cost_path(grid):
    n = len(grid)
    m = len(grid[0])
    dp = [[float('inf')] * m for _ in range(n)]
    dp[0][0] = grid[0][0]
    
    # Fill first row
    for j in range(1, m):
        dp[0][j] = dp[0][j-1] + grid[0][j]
    
    # Fill first column
    for i in range(1, n):
        dp[i][0] = dp[i-1][0] + grid[i][0]
    
    # Fill rest of the dp table
    for i in range(1, n):
        for j in range(1, m):
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
    
    return dp[n-1][m-1]

n, m = map(int, input().split())
grid = []
for _ in range(n):
    row = list(map(int, input().split()))
    grid.append(row)

print(min_cost_path(grid)) 