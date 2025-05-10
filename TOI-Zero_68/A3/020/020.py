h1, h2, b1, b2 = map(int, input().split())
x, y = map(int, input().split())

max_soldiers = 0

for i in range(x + 1):
    for j in range(x - i + 1):
        for a in range(y + 1):
            for b in range(y - a + 1):
                hh1 = i + b
                hh2 = j + a
                bb1 = i + a
                bb2 = j + b
                
                if hh1 <= h1 and hh2 <= h2 and bb1 <= b1 and bb2 <= b2:
                    max_soldiers = max(max_soldiers, i + j + a + b)

print(max_soldiers) 
