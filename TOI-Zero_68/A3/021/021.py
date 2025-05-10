import math

n, k = map(int, input().split())
a = [int(input()) for _ in range(n)]
a.sort()

x = k * a[0]
count = 1  # Start with 1 since we're checking from index 1

for i in range(1, n):
    if math.ceil(x / a[i]) == k:
        count += 1

print(count) 
