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



N,M=map(int,input().split())

parent=[0]*(N+1)

for i in range(1,N+1):
    parent[i]=i

for _ in range(M):
    a,b,c=map(int,input().split())
    if a==0:
        union(parent,b,c)
    else:
        if find(parent,b)==find(parent,c):
            print("YES")
        else:
            print("NO")