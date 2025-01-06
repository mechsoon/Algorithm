from collections import deque
N,M,K,X=map(int,input().split())
graph=[[] for _ in range(N+1)]

for _ in range(M):
    a,b=map(int,input().split())
    graph[a].append(b)

distance=[-1]*(N+1)

q=deque([X])
distance[X]=0
while q:
    now=q.popleft()
    for i in graph[now]:
        if distance[i]==-1:
            distance[i]=distance[now]+1
            q.append(i)


flag=True
for i in range(1,N+1):
    if distance[i]==K:
        print(i)
        flag=False
if not flag:
    print(-1)