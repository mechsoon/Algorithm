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
