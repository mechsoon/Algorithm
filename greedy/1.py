# n명을 리스트로 받고 오름차순으로 정렬한다음, 
from collections import deque
n=int(input())

num=list(map(int,input().split()))
num.sort()
# 현재 인덱스의 값이랑 그 값을 갖는 개수가 같아야 보내기가능 이걸 큐로해보면 어떨까? 
result=0
q=deque()
for i in range(n):
    q.append(num[i])

count=0
# 1,2,3,2,2
# 1,2,2,2,3
while q:
    v=q.popleft()
    count+=1
    if v==count:
        result+=1
        count=0
        continue

print(result)
# 2 2
# 8 1 2 2 2 2 3 3 3