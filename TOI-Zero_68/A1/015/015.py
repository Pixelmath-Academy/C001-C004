a = (input())
b = (input())
c = (input())
if len(a) > 5 and len(b) > 5:
    print(a[0] + a[1] + b[-1] + c[-1])
else:
    print(a[0] + c + b[-1])