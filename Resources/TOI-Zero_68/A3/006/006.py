n = int(input())
v = []

# Generate the sequence of weights
for i in range(1, 201):
    for j in range(1, 10):
        v.append(2 * i)
    v.append(i)

# Read and sort input numbers in descending order
a = list(map(int, input().split()))
a.sort(reverse=True)

# Calculate weighted sum
ans = 0
for i in range(n):
    ans += a[i] * v[i]

print(ans) 