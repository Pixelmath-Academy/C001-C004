n, s = map(int, input().split())
mn = mx = 0

for i in range(n):
    k = int(input())
    if k % 3 == 0 and k % 4 != 0:
        mn += k // 3 * 10
        mx += k // 3 * 10
    elif k % 3 != 0 and k % 4 == 0:
        mn += k // 4 * 10
        mx += k // 4 * 10
    else:
        mn += min(k // 3 * 10, k // 4 * 10)
        mx += max(k // 3 * 10, k // 4 * 10)

print(s - mx, s - mn) 