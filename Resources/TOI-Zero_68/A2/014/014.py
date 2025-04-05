n = int(input())
nums = list(map(int, input().split()))

nums.sort()
median = nums[n//2]

cost = sum(abs(x - median) for x in nums)
print(cost) 