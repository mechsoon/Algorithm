n=int(input())
num=list(map(int,input().split()))
num.sort()
d=0
if n%2==0:
    d=min(num[n//2-1],num)
        
print(idx)