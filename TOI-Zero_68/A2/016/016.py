n = int(input())
nums = list(map(int, input().split()))

# Keep track of both max and min product because of negative numbers
max_so_far = nums[0]
min_so_far = nums[0]
result = max_so_far

for i in range(1, n):
    curr = nums[i]
    temp_max = max(curr, max_so_far * curr, min_so_far * curr)
    min_so_far = min(curr, max_so_far * curr, min_so_far * curr)
    max_so_far = temp_max
    result = max(result, max_so_far)

print(result) 