n=int(input())
num=list(map(int,input().split()))
num.sort()
# 

def dijkstra(start):
    distance[start]=0
    visited[start]=True
    for i in graph[start]:
        distance[i[0]]=i[1]
    
    for j in range(n-1):
        now=fine_ind()
        visited[now]=True
        for k in graph[now]:
            cost=distance[now]+k[i]
            if cost<distance[k[0]]:
                distance[k[0]]=k[1]


