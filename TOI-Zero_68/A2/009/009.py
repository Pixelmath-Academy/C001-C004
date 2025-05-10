import sys

def main():
    n, pass_player = map(int, sys.stdin.readline().split())

    tour = [[0] * (n + 1) for _ in range(n + 1)]

    for i in range(1, n + 1):
        row = list(map(int, sys.stdin.readline().split()))
        for j in range(1, n + 1):
            tour[i][j] = row[j - 1]

    checklist = list(range(1, n + 1))

    while len(checklist) > 1:
        winner = []

        i = 0
        while i < len(checklist):
            if i + 1 >= len(checklist):
                winner.append(checklist[i])
                i += 1
            else:
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
                i += 2

        checklist = winner

    print(checklist[0])

if __name__ == "__main__":
    main()
