# 1 2 3 4 5 6
n=int(input())
# 만약 9

# 1  2 6 7 15
# 3  5 8 14
# 4  9 13 
# 10 12  
# 11
temp=1
idx=0
for i in range(2,n):
    temp+=i
    if temp>=n:
        temp-=i
        idx=i
        print(idx)
        break

