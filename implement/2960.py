import math
N,K=map(int,input().split())
num=[1]*(N+1)
count=0
for i in range(2,N+1):
    j=1
    while i*j<=N:
        if num[i*j]==1:
            num[i*j]=0
            count+=1
            if count==K:
                print(i*j)
        j+=1