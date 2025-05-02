from collections import deque
from collections import defaultdict

n, k = map(int, input().split())
ans = 0
a = list(map(int, input().split()))

dq = deque()
count = defaultdict(int)
sum_unique = 0
id = 0

for i in range(n):
    if count[a[i]] == 0:
        sum_unique += 1
    count[a[i]] += 1
    
    l = i
    check = False
    dq.append((a[i], i))
    
    while sum_unique >= k:
        check = True
        x, idx = dq.popleft()
        l = idx
        count[x] -= 1
        if count[x] == 0:
            sum_unique -= 1
    
    if l < id or not check:
        continue
        
    ans += (l - id + 1) * (n - i)
    id = l + 1

print(ans) 