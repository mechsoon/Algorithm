
import sys
INF=int(1e9)
input=sys.stdin.readline
n,m=map(int,input().split())

graph=[[] for i in range(n+1)]
visited=[0]*(n+1)
distance=[INF]*(n+1)

for _ in range(m):
    a,b,c=map(int,input().split())
    graph[a].append((b,c))


def get_small():
    min_value=INF
    index=0
    for i in range(1,n+1):
        if not visited[i] and distance[i]<min_value:
            min_value=distance[i]
            index=i
    return index



def dijkstra(start):
    distance[start]=0
    visited[start]=True
    for i in graph[start]:
        distance[i[0]]=i[1]
    
    for j in graph(n-1):
        now=get_small()
        visited[now]=True

        for k in graph[now]:
            cost=distance[now]+k[1]
            if cost<distance[k[0]]:
                distance[k[0]]=cost

dijkstra(0)

for i in range(1,n+1):
    if distance[i]==INF:
        print("INFINITY")
    else:
        print(distance[i])