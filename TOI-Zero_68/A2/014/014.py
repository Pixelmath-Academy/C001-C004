a, b = input().split()
idxa, idxb = 0, 0

while len(a) < len(b):
    a += a[idxa]
    idxa += 1

while len(b) < len(a):
    b += b[idxb]
    idxb += 1

count = 0
sum_val = 0
mx = 0

for i in range(len(a)):
    a = a[:i] + a[i].lower() + a[i+1:]
    b = b[:i] + b[i].lower() + b[i+1:]
    
    if (a[i] in 'love' or b[i] in 'love'):
        count += 1
        sum_val += 1
        mx = max(mx, sum_val)
        print('w', end='')
    else:
        print('$', end='')
        sum_val = 0

if count % 2 == 1:
    print(mx)
elif mx < 2:
    print('#') 