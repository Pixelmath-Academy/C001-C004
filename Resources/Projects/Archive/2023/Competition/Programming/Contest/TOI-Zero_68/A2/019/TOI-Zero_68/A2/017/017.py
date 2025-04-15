ans = 0
cost = {
    ('S', 'R'): 60,
    ('S', 'T'): 80,
    ('M', 'R'): 80,
    ('M', 'T'): 100,
    ('L', 'R'): 100,
    ('L', 'T'): 120
}

size, types = input().strip().split()
ans += cost[(size, types)]
q = [x for x in input().strip().split()]
if q[0] == 'N':
    print(ans)
else:
    if(q[0] == 'E'):
        print(ans + 10*int(q[1]))
    else:
        print(ans + 15*int(q[1]))