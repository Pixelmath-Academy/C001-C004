from collections import defaultdict

n, k = map(int, input().split())
count = defaultdict(int)
sum_unique = 0
c = 0

for i in range(n):
    x = int(input())
    if count[x] == 0:
        sum_unique += 1
    count[x] += 1
    
    while sum_unique == k:
        c += 1
        for j in range(1, k + 1):
            count[j] -= 1
            if count[j] == 0:
                sum_unique -= 1

print(n - c * k) 