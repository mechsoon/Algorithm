from collections import deque
n=int(input())
array=[[0]*(n+1) for _ in range(n+1)]
# print(map)
m=int(input())
for _ in range(m):
    a, b=map(int,input().split())
    array[a][b]=1


dx=[0,-1,0,1]
dy=[1,0,-1,0]
# east north west south

def direction(str,number):
    if str=="D":
        number-=1
    else:
        number+=1
    if number==-1:
        number=3
    elif number==4:
        number=0
    return number


number=0
k=int(input())
num=deque()
for _ in range(k):
    time,direct=map(int,input().split())
    num.append((time,direct))

x=1
y=1
count=0
q=deque()
q.append([1,1])
array[1][1]=2
while num:
    time,direct=num.popleft()
    for _ in range(time):
        count+=1
        nx=x+dx[number]
        ny=y+dy[number]
        if array[nx][ny]==1:
            q.popleft()
            array[nx][ny]=2
        else
        if nx>n and ny>n and nx<=0 and ny<=0 and array[nx][ny]==2:
            print(count)
            break
    
    direction(direct,number)
    x=nx
    y=ny



