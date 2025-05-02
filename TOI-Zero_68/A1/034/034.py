n = int(input())
a = float('inf')
for _ in range(n):
    x = int(input())
    a = min(a, x)
print(a)
