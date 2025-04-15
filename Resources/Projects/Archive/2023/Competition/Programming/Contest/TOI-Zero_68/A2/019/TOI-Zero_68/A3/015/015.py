n = int(input())
a = [int(input()) for _ in range(n)]
a.sort()

count = 0
sum_total = 0

for i in range(n):
    count += a[i]
    sum_total += 2 * count

print(sum_total) 