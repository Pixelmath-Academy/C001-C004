def dfs(matrix, i, j, memo):
    if memo[i][j] != 0:
        return memo[i][j]
    
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    max_length = 1
    
    for di, dj in directions:
        ni, nj = i + di, j + dj
        if (0 <= ni < len(matrix) and 0 <= nj < len(matrix[0]) and 
            matrix[ni][nj] > matrix[i][j]):
            max_length = max(max_length, 1 + dfs(matrix, ni, nj, memo))
    
    memo[i][j] = max_length
    return max_length

n = int(input())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

memo = [[0] * n for _ in range(n)]
result = 0

for i in range(n):
    for j in range(n):
        result = max(result, dfs(matrix, i, j, memo))

print(result) 