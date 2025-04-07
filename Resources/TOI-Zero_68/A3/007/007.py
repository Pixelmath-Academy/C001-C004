def solve():
    l, n = map(int, input().split())
    
    count = 0
    while n > 0:
        count += 1
        for i in range(1, count * l + 1):
            n -= min(i, l)
    
    print(count)

if __name__ == "__main__":
    solve() 