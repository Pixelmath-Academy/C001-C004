n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

x, y = 1, 1
count = 0

for i in range(n):
    xx, yy = a[i], b[i]
    p, pp = min(x, xx), max(x, xx)
    q, qq = min(y, yy), max(y, yy)
    
    if p == q and pp == qq:
        count += 1
    elif p != q and p != qq and pp != q and pp != qq:
        if p < q and pp > q and pp < qq:
            count += 1
        elif q < p and qq > p and qq < pp:
            count += 1
    
    x, y = xx, yy

print(count) 