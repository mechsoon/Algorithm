def dfs(array,visited,v):
    visited[v]=True
    print(v,end=" ")
    for i in array[v]:
        if not visited[i]:
            dfs(array,visited,i)