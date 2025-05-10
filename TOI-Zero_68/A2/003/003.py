n = int(input())

tree = list(map(int, input().split()))

tree = [0] + tree + [0]

count = 0

for i in range(1, n + 1):
    if tree[i] > tree[i - 1] and tree[i] > tree[i + 1]:
        count += 1

print(count)
