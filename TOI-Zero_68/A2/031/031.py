n = int(input())
vec = [[], []]
vec[0] = input().strip().split()
vec[1] = input().strip().split()

q = int(input())
for _ in range(q):
    a, b, c = input().split()
    a, b = int(a), int(b)
    vec[a - 1][b] = c

print(" ".join(vec[0]))
print(" ".join(vec[1]))

cnt = 0
for i in range(n):
    s = vec[0][i] + vec[1][i]
    if s in ["AT", "TA", "CG", "GC"]:
        cnt += 1

print(n - cnt)