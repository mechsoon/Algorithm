# 전형적인 kruskal algorithm 문제

import sys
from collections import deque

input=sys.stdin.readline

N,M=map(int,input().split())

graph=[]*(N+1)

parent=[0]*(N+1)
def find(parent,x):
    if parent[x]!=x:
        parent[x]=find(parent,parent[x])
    return parent[x]

def union(parent,a,b):
    a=find(parent,a)
    b=find(parent,b)
    if a<b:
        parent[b]=a
    else:
        parent[a]=b

for i in range(1,N+1):
    parent[i]=i


for _ in range(M):
    a,b,c=map(int,input().split())
    graph.append((c,a,b))

graph.sort()
# 가격이 낮은 순서대로 정렬

result=0


for edge in graph:
    cost,a,b=edge
    if find(parent,a)!=find(parent,b):
        union(parent,a,b)
        result+=cost
        last=cost
print(result-cost)

