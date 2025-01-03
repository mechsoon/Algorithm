
def find(parent,x):
    if parent[x]!=x:
        return find(parent,parent[x])
    return x

def union(parent,a,b):
    a=find(parent,a)
    b=find(parent,b)
    if a<b:
        parent[b]=a
    else:
        parent[a]=b

v,e=map(int,input().split())

parent=[0]*(v+1)

for i in range(1,v+1):
    parent[i]=i

for i in range(e):
    a,b=map(int,input().split())
    union(parent,a,b)


print("각 원소가 속한 집합",end=" ")
for i in range(1,v+1):
    print(find(parent,i),end=" ")
