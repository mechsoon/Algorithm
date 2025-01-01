
#   0 1 2 3 4 5 6 7 8 9 10
# # 1 3 1 5 6 7 3 5 8 9 2
#   1   2 8 8  
#         6 9


# dp, 5번째를 예로 들면 누적합 중에 최대를 알면 된다. 그니까 3번째까지의 누적합중에 가장 큰값을 현재에 더해주면 된다.

N=int(input())
d=[0]*1001
storage=list(map(int,input().split()))
d[0]=storage[0]
d[1]=max(d[0],storage[1])
print(storage)
for i in range(2,N):
    print(i)
    d[i]=max(d[i-2]+storage[i],d[i-1])
print(d[N-1])

# 처음 값을 고려하지 않았네... 그리고 이미 앞에서 다 처리가 되어서 앞에것을 다 처리할 필요는 없었음. 무조건 마지막이 답이 아닐 수 있는데 그걸 고려하지 못함