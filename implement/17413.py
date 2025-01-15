from collections import deque
s=input()
q=deque(s)
result=[]
temp=""
while q:
    now=q.popleft()
    # if now!=" " and now!=">":
    #     temp+=now
    if now==" " and "<" not in temp:
        temp=temp[::-1]
        result.append(temp)
        temp=""
        result.append(" ")
    elif now=="<" and len(temp)>0:
        temp=temp[::-1]
        result.append(temp)
        temp="<"
    elif now==">":
        temp+=">"
        result.append(temp)
        temp=""
    else:
        temp+=now
temp=temp[::-1]
result.append(temp)
for i in result:
    print(i,end="")
