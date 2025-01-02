from collections import deque
def solution(numbers,target):
    idx=0
    n=len(numbers)
    queue=deque()
    queue.append([numbers[0],idx])
    queue.append([-1*numbers[0],idx])
    answer=0
    while queue:
        num,index=queue.popleft()
        index=index+1
        if index<n:
            queue.append([num+numbers[index],index])
            queue.append([num-numbers[index],index])
        else:
            if num==target:
                answer+=1
    return answer


