def main():
    n = int(input())
    v = []
    for i in range(1, 201):
        v.extend([2 * i] * 9)
        v.append(i)
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    v.sort()
    result = 0
    for i in range(n):
        result += a[i] * v[i]
    print(result)

main()
