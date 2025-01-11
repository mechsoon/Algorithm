from collections import deque
N,M,V=map(int,input().split())

graph=[[] for _ in range(N+1)]
visited=[0]*(N+1)

for i in range(M):
    a,b=map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)


def dfs(graph,v,visited):
    visited[v]=1
    print(v,end=" ")
    for i in sorted(graph[v]):
        if not visited[i]:
            dfs(graph,i,visited)

dfs(graph,V,visited)

visitedBfs=[0]*(N+1)
print()
q=deque([V])
while q:
    now=q.popleft()
    print(now,end=" ")
    visitedBfs[now]=1
    for i in sorted(graph[now]):
        if not visitedBfs[i]:
            q.append(i)
            visitedBfs[i]=1
