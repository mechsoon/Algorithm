# 우선 dfs 갯수를 리턴하고 visited 1처리
from collections import deque
N=int(input())

graph=[]

for i in range(N):
    s=input()
    temp=[]
    for i in s:
        temp.append(int(i))
    graph.append(temp)

visited=[[0]*N for _ in range(N)]

dx=[0,0,-1,1]
dy=[1,-1,0,0]

def bfs(x,y):
    q=deque()
    q.append((x,y))
    count=0
    while q:
        prevx,prevy=q.popleft()
        count+=1
        visited[prevx][prevy]=1
        for i in range(4):
            nx=prevx+dx[i]
            ny=prevy+dy[i]
            if nx>=0 and ny>=0 and nx<N and ny<N and graph[nx][ny]==1 and not visited[nx][ny]:
                q.append((nx,ny))
                visited[nx][ny]=1
    return count

result=[]
answer=0
for i in range(N):
    for j in range(N):
        if graph[i][j] and not visited[i][j]:
            count=bfs(i,j)
            print(i,j)
            result.append(count)

print(len(result))
for i in sorted(result):
    print(i)