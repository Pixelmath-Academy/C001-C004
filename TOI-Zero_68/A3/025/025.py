n, w, l = map(int, input().split())

a = [[0] * (w + 1) for _ in range(n)]

for i in range(n):
    parts = list(map(int, input().split()))
    c = parts[0]
    positions = parts[1:]
    for k in positions:
        a[i][k] = 1

for i in range(1, w + 1):
    check = 1
    for j in range(n):
        max_val = 0
        start = max(1, i - l)
        end = min(w, i + l)
        
        for k in range(start, end + 1):
            if a[j][k] > max_val:
                max_val = a[j][k]
        
        if max_val == 0:
            check = 0
            break
    
    if check:
        print(1)
        exit()
