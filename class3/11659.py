import sys
input=sys.stdin.readline
m,n=map(int,input().split())
num=list(map(int,input().split()))

dp=[0]*(100005)
dp[0]=0
for i in range(1,m+1):
    dp[i]=dp[i-1]+num[i-1]
    # dp[1]=0+5
    # 2=5+4
    # print(dp[i])
for i in range(n):
    e,j=map(int,input().split())
    print(dp[j]-dp[e-1])