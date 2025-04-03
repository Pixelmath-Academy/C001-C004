n = int(input())

# dp[i] represents number of ways to climb i stairs
dp = [0] * (n + 1)
dp[0] = 1  # Base case
dp[1] = 1  # Can only take 1 step

for i in range(2, n + 1):
    # Can take either 1 or 2 steps
    dp[i] = dp[i-1] + dp[i-2]

print(dp[n]) 