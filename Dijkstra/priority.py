import sys
import heapq

def dijkstra(Start):
    q=[]
    heapq.heappush(q,(0,Start))
    distance[Start]=0
    while q:
        dist,node=heapq.heappop(q)

        if distance[node]<dist:
            continue

        for i in graph[node]:
            cost=dist+i[1]
            if cost<distance[i[0]]:
                distance[i[0]]=cost
                heapq.heappush(q,(cost,i[0]))

