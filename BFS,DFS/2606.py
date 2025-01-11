from collections import deque
N=int(input())

M=int(input())

visited=[0]*(N+1)
graph=[[] for _ in range(N+1)]

for _ in range(M):
    a,b=map(int,input().split())
    graph[a].append(b)
    # graph[b].append(a)


q=deque([1])

while q:
    now=q.popleft()
    visited[now]=1
    for next in graph[now]:
        if not visited[next]:
            q.append(next)
        

result=0
for i in range(2,N+1):
    if visited[i]:
        result+=1

print(result)