from collections import deque

n = int(input())
board = []
for i in range(n):
    board.append(input())

count = 0
visited = [[0] * n for _ in range(n)]
q = deque([(n-1, n-1)])
moves = [(-1, 0), (0, -1)]

while q:
    x, y = q.popleft()
    if visited[x][y]:
        continue
    
    visited[x][y] = 1
    count += 1
    
    for move_x, move_y in moves:
        new_x = x + move_x
        new_y = y + move_y
        
        if (new_x < 0 or new_y < 0 or new_x >= n or new_y >= n or 
            board[new_x][new_y] == 'X'):
            continue
        
        q.append((new_x, new_y))

print(count) 