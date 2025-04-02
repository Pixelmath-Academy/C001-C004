a = int(input())
b = int(input())
c = int(input())
odd = 0
even = 0
if a % 2 == 1:
    odd += 1
else:
    even += 1

if b % 2 == 1:
    odd += 1
else:
    even += 1

if c % 2 == 1:
    odd += 1
else:
    even += 1

print(f"even {even}")
print(f"odd {odd}")

