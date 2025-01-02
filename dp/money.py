# dp긴한데 어떻게 접근할까?? 
# 2 15
# 2 3이면
# d[2]=1 d[3]=1 d[4]=d[2]+1 , d[1]+d[3] d[5]=d[2]+d[3] or d[1]+d[4]
# d[6]=d[4]+1, d[3]+1 d[7]=

array=[]
N,M=map(int,input().split())
for i in range(N):
    array.append(int(input()))

print(array)
# array에 있는 애들로 i를 만들 수 있는지 체크
d=[0]*10001
array.sort()
for i in range(1,M+1):
    if i in array:
        d[i]=1
    for j in array:
        if i%j==0 and d[i]!=1:
            d[i]=i//j
            print("d[i]=",i,d[i])
    num=[k for k in range(i) if d[k]>0]
    small=100000
    for v in range(len(num)-1):
        for w in range(v+1,len(num)):
            if num[v]+num[w]==i:
                small=min(d[v]+d[w],small)
if not d[M]:
    print(d[M])
else:
    print(-1)
        # 현재 숫자보다 작은애들중에 i를 만들 수 있는 경우의수를 찾기


