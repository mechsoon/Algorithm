# bfs는 주로 최단 거리 찾을 때 사용, queue
from collections import deque

def bfs(start):
    queue=deque([start])
    visited[start]=True
    while queue:
        v=queue.popleft()
        for i in array[v]:
            if not visited[i]:
                visited[i]=True
                queue.append(i)