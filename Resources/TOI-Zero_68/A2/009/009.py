n, pass_player = map(int, input().split())
tour = [[0] * (n + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    for j in range(1, n + 1):
        tour[i][j] = int(input())

checklist = list(range(1, n + 1))

while len(checklist) > 1:
    winner = []
    for i in range(0, len(checklist), 2):
        x, y = checklist[i], checklist[i + 1]
        if tour[x][y] == x:
            if pass_player == y:
                pass_player = 0
                winner.append(y)
            else:
                winner.append(x)
        else:
            if pass_player == x:
                pass_player = 0
                winner.append(x)
            else:
                winner.append(y)
    checklist = winner

print(checklist[0]) 