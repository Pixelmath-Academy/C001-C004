n = int(input())
if n == 1:
    a, b = map(int, input().split())
    print(max(a, b))
else:
    c = 0
    results = []
    for i in range(n):
        a, b = map(int, input().split())
        max_val = max(a, b)
        results.append(max_val)
        c += max_val
    for i in range(n):
        print(results[i], end="")
        if i != n - 1:
            print(" + ", end="")
        else:
            print(" = ", c)
