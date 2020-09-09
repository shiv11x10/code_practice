t = int(input())
while t != 0:
    temp = list(map(int,input().strip().split()))[:2]
    n = temp[0]
    m = temp[1]
    a = list(map(int,input().strip().split()))[:n]
    b = list(map(int,input().strip().split()))[:m]
    flag = False
    for i in a:
        if i in b:
            print("YES")
            print("1", i)
            flag = True
            break
    if flag == False:
        print("NO")
    t -= 1
