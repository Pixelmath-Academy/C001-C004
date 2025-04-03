n = int(input())
tree = [0] * (n + 2)

for i in range(1, n + 1):
    tree[i] = int(input())

count = 0
for i in range(1, n + 1):
    if tree[i] > tree[i-1] and tree[i] > tree[i+1]:
        count += 1

print(count) 