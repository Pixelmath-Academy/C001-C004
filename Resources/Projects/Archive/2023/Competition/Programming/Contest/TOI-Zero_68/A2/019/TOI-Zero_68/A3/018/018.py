l, n = map(int, input().split())
cnt = 1

while n >= cnt * cnt:
    n -= cnt * cnt
    cnt += 1

print(l - cnt + 1) 