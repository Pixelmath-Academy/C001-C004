def min_operations(s):
    n = len(s)
    left = 0
    right = n - 1
    ops = 0
    
    while left < right:
        if s[left] != s[right]:
            ops += 1
        left += 1
        right -= 1
    
    return ops

s = input().strip()
print(min_operations(s)) 