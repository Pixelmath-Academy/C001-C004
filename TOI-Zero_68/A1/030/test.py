n = int(input())
l = [int(x) for x in input().split()]

if n == 1:
    print(max(l[0], l[1]))
else:
    list_result = []
    for i in range(0, 2*n, 2):
        list_result.append(max(l[i], l[i+1]))
    for i in range(len(list_result)): 
        print(list_result[i], end='')
        if(i != len(list_result)-1):
            print(" + ", end='')
    print(f" = {sum(list_result)}")

    