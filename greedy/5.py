n,m=map(int,input().split())
bowling=list(map(int,input().split()))
result=0
for i in range(n-1):
    for j in range(i+1,n):
        if bowling[i]!=bowling[j]:
            result+=1
print(result)

# 
num=[0]*11
for x in bowling:
    num[x]+=1

for i in range(1,n+1):
    n-=num[i]
    result+=num[i]*n

print(result)