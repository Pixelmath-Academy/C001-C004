n, target = map(int, input().split())
coins = list(map(int, input().split()))

dp = [float('inf')] * (target + 1)
dp[0] = 0

for i in range(1, target + 1):
    for coin in coins:
        if coin <= i:
            dp[i] = min(dp[i], dp[i - coin] + 1)

print(dp[target] if dp[target] != float('inf') else -1) 