import sys
input=sys.stdin.readline
N,M=map(int,input().split())
pocketmon={}
pocket={}
for i in range(1,N+1):
    name=input().rstrip()
    pocketmon[name]=str(i)
    pocket[str(i)]=name
# print()
# print(pocket)
for i in range(M):
    m=input().rstrip()
    if m in pocketmon.keys():
        print(pocketmon[m])
    elif m in pocket.keys():
        print(pocket[m])


    