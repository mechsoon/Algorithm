# 인접행렬로 모든 노드로부터의 최단거리를 계산하는 알고리즘

n=int(input())
m=int(input())
INF=int(1e9)
graph=[[INF]*(n+1) for i in range(n+1)]

for _ in range(m):
    a,b,c=map(int,input().split())
    graph[a][b]=c

for i in range(1,n+1):
    for j in range(1,n+1):
        if i==j:
            graph[i][j]=0


for k in range(1,n+1):
    for a in range(1,n+1):
        for b in range(1,n+1):
            graph[a][b]=min(graph[a][b],graph[a][k]+graph[k][b])


