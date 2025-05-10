n = int(input())
arr = list(map(int, input().split()))

prefix = [0] * (n + 1)

for i in range(1, n + 1):
    prefix[i] = prefix[i - 1] + arr[i - 1]

unique_sums = set()

for i in range(1, n + 1):
    for j in range(i, n + 1):
        subarray_sum = prefix[j] - prefix[i - 1]
        unique_sums.add(subarray_sum)

print(len(unique_sums))
