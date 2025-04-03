n = int(input())
nums = list(map(int, input().split()))

if n == 1:
    print(nums[0])
elif n == 2:
    print(max(nums[0], nums[1]))
else:
    # dp[i] represents maximum sum up to index i
    dp = [0] * n
    dp[0] = nums[0]
    dp[1] = max(nums[0], nums[1])
    
    for i in range(2, n):
        # Either include current element and sum before previous
        # Or exclude current element and take previous sum
        dp[i] = max(dp[i-1], dp[i-2] + nums[i])
    
    print(dp[n-1]) 