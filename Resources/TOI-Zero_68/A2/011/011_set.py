set_x = set()
inp = [int(x) for x in input().split()]

ans = []
for i in range(10):
    x = inp[i]
    if x not in set_x:
        set_x.add(x)
        ans.append(x)
for items in ans:
    print(items, end = " ")