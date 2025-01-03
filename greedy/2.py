from collections import deque

n=input()
result=0
d=[0]*1000000

for i in range(len(n)):
    d[i]=int(n[i])

for i in range(1,len(n)):
    d[i]=max(d[i]*d[i-1],d[i]+d[i-1])
print(d[len(n)-1])

# 위에는 dp 풀이 방법

from collections import deque

n=input()
q=deque()
index=0
e=len(n)
q.append([int(n[0]),index])

while q:
    now,idx=q.popleft()
    idx+=1
    if idx<e:
        temp=max(now*int(n[idx]),now+int(n[idx]))
        q.append([temp,idx])
    else:
        print(now)
    
# 위에는 bfs풀이 

