#Author: Rik Biswas
def checkDiff(a,b,d):
    s = True
    for i in range(1,len(b)):
        if(b[i]-a[i+1]!=d):
            s=False
            break
    return s

def Driver(a,b,n):
    if (len(a)==2):
        if max(a) > b[0]:
            return b[0]-min(a)
        else:
            return b[0]-max(a)
    a.sort()
    b.sort()
    d = b[0]-a[1]
    if d <=0:
        return b[0]-a[0]
    else:
        if checkDiff(a,b,d):
            return d
        else:
            return b[0]-a[0]
        



# print(driver([1,4,3,8],[15,8,11],4))
t = int(input())
for x in range(t):
    n = int(input())
    a = list(map(int ,input().split(" ")))
    b = list(map(int ,input().split(" ")))
    print(driver(a,b,n))
    print("the changes are done ")
