# 연속하는건 괜찮은데 중간에 뭐가 있으면 안됨
from collections import deque

n=int(input())

answer=0
for _ in range(n):
    word=input()
    q=deque()
    for i in word:
        q.append(i)
    result=[]
    prev=q.popleft()
    result.append(prev)
    flag=False
    while q:
        now=q.popleft()
        if prev==now:
            continue
        elif prev!=now:
            if now in result:
                flag=True
        result.append(now)
        prev=now
    if flag:
        pass
    else:
        answer+=1

print(answer)
