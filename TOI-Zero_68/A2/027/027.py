n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

max_score = -1000000000
for i in range(n):
    max_score = max(max_score, arr[i])

count = 0
for i in range(n):
    if arr[i] == max_score:
        count += 1

print(max_score)
print(count)