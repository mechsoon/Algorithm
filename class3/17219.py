import sys
input=sys.stdin.readline

N,M=map(int,input().split())

password={}
for i in range(N):
    id,passw=input().split()
    password[id]=passw

for i in range(M):
    wants=input().rstrip()
    print(password[wants])