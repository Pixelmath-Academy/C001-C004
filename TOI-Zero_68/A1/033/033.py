n = int(input())
cnt = 0
for _ in range(n):
    c = input().strip()
    if c in 'AEIOU':
        cnt += 1
print(cnt)
