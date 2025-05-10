import sys

def main():
    n, k = map(int, sys.stdin.readline().split())
    
    in1 = list(map(int, sys.stdin.readline().split()))
    in2 = list(map(int, sys.stdin.readline().split()))
    out1 = list(map(int, sys.stdin.readline().split()))
    out2 = list(map(int, sys.stdin.readline().split()))
    
    in1.sort()
    in2.sort()
    out1.sort()
    out2.sort()
    
    mn = float('inf')
    
    for i in range(min(n, k) + 1):
        j = k - i
        if j > n:
            continue
            
        mx = 0
        for x in range(i):
            mx = max(mx, in1[x] + out1[i - x - 1])
        
        for x in range(j):
            mx = max(mx, in2[x] + out2[j - x - 1])
        
        mn = min(mn, mx)
    
    print(mn)

if __name__ == "__main__":
    main() 
