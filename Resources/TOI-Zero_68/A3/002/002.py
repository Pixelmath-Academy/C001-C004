x = int(input())
l = 0
while l * l < x:
    l += 1

print(2 * (l - 1) - (x % 2 != l % 2)) 