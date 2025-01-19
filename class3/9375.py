n=int(input())

for i in range(n):
    m=int(input())
    temp={}
    for j in range(m):
        detail,category=input().split()
        if category in temp:
            temp[category]+=1
        else:
            temp[category]=1
    answer=1
    for i in temp.values():
        answer*=(i+1)
    print(answer-1)