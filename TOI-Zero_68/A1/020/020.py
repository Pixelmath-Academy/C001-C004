a = int(input())
b = int(input())
c = int(input())
if a < b and b < c:
    print("increasing")
elif a > b and b > c:
    print("decreasing")
else:
    print("neither")
