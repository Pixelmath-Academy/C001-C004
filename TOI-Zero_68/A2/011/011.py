from collections import deque

n = int(input())
target = int(input())

# BFS to find shortest path
visited = set()
q = deque([(n, 0)])  # (number, moves)
visited.add(n)

while q:
    num, moves = q.popleft()
    
    if num == target:
        print(moves)
        break
    
    # Try all possible operations
    operations = [num + 1, num - 1, num * 2]
    for next_num in operations:
        if next_num not in visited and 0 <= next_num <= 100000:
            visited.add(next_num)
            q.append((next_num, moves + 1)) 