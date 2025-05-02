prime = []

def is_prime(x):
    if x < 2:
        return 0
    for p in prime:
        if x % p == 0:
            return 0
        if p * p > x:
            break
    return 1

a, b = map(int, input().split())
dp = [[0] * 15005 for _ in range(4)]
dp[0][0] = 1

for i in range(a, b + 1):
    for j in range(3):
        for k in range(15004, i - 1, -1):
            dp[j + 1][k] += dp[j][k - i]

count = 0
for i in range(1, 15005):
    if is_prime(i):
        count += dp[3][i]
        prime.append(i)

print(count) 