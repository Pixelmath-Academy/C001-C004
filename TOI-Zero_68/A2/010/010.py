n = int(input())
grid = []
for _ in range(n):
    row = list(map(int, input().split()))
    grid.append(row)

# dp[i][j] represents the maximum sum ending at position (i,j)
dp = [[0] * n for _ in range(n)]
dp[0][0] = grid[0][0]

# Fill first row
for j in range(1, n):
    dp[0][j] = dp[0][j-1] + grid[0][j]

# Fill first column
for i in range(1, n):
    dp[i][0] = dp[i-1][0] + grid[i][0]

# Fill rest of the dp table
for i in range(1, n):
    for j in range(1, n):
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + grid[i][j]

print(dp[n-1][n-1]) 