n, k, t = map(int, input().split())
t -= 1
x = 0
count = 0

while True:
    count += 1
    if x == t:
        break
    x = (x + k) % n
    if x == 0:
        break

print(count) 