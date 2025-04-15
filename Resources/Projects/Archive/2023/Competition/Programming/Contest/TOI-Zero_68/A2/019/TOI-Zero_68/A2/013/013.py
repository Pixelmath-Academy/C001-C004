mp = {}
mp2 = {}

mp['H'] = 5
mp['O'] = 3
mp['J'] = 2

mp2[('R', 1)] = 12
mp2[('R', 2)] = 18
mp2[('R', 3)] = 25
mp2[('T', 1)] = 15
mp2[('T', 2)] = 20
mp2[('T', 3)] = 30
mp2[('M', 1)] = 10
mp2[('M', 2)] = 15
mp2[('M', 3)] = 20

a, x, b, y, z = input().split()
x = int(x)
y = int(y)
z = int(z)

print(mp[a] * x + mp2[(b, y)] * z) 