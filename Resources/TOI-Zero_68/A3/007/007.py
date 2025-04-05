def solve():
    # Read input
    l, n = map(int, input().split())
    
    count = 0
    while n > 0:
        count += 1
        # For each number from 1 to count*l
        for i in range(1, count * l + 1):
            # Subtract min(i, l) from n
            n -= min(i, l)
    
    print(count)

if __name__ == "__main__":
    solve() 