a, b, c = input().split()

mp = {}
mp[('S', 'R')] = 60
mp[('S', 'T')] = 80
mp[('M', 'R')] = 80
mp[('M', 'T')] = 100
mp[('L', 'R')] = 100
mp[('L', 'T')] = 120

if c != 'N':
    k = int(input())
    if c == 'P':
        print(mp[(a, b)] + 15 * k)
    else:
        print(mp[(a, b)] + 10 * k)
else:
    print(mp[(a, b)]) 