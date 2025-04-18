n = int(input())

names = []
weights = []

for _ in range(n):
    name, weight = input().split()
    names.append(name)
    weights.append(int(weight))

for i in range(n - 1):
    for j in range(n - i - 1):
        if weights[j] < weights[j + 1]:
            weights[j], weights[j + 1] = weights[j + 1], weights[j]
            names[j], names[j + 1] = names[j + 1], names[j]

more_than_15 = sum(1 for weight in weights if weight > 15)

print(more_than_15)
print(names[0], weights[0])