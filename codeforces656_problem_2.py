t = int(input())
while t != 0:
    n = int(input())
    a = list(map(int,input().strip().split()))[:2*n]
    res = []
    for i in a:
        if i not in res:
            res.append(i)
    for i in res:
        print(i, end=" ")
    print()
    t -= 1
