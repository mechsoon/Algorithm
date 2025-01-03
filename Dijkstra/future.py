# import sys
# import heapq
# input=sys.stdin.readline
# INF=int(1e9)
# N,M=map(int,input().split())
# visited=[0]*(N+1)
# distance=[INF]*(N+1)
# graph=[[] for i in range(N+1)]

# X,K=map(int,input().split())
# # K 경유해야하는 회사, X 최종 목적지

# for _ in range(M):
#     a,b=map(int,input().split())
#     graph[a].append((b,1))

# def dijkstra(start):
#     q=[]
#     heapq.heappush(q,(0,start))
#     distance[start]=0
    
#     while q:
#         dist,now=heapq.heappop(q)

#         if distance[now]<dist:
#             continue

#         for i in graph[now]:
#             cost=dist+i[1]
#             if cost<distance[i[0]]:
#                 cost=distance[i[0]]
#                 heapq.heappop(q,(cost,i[0]))


수정 필요        
