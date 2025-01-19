n=int(input())

d=[0]*(101)

d[1]=1
d[2]=1
d[3]=1
d[4]=2
d[5]=2
for j in range(n):
    num=int(input())
    if num==1:
        print(d[1])
        continue
    elif num==2:
        print(d[2])
        continue
        
    elif num==3:
        print(d[3])
        # exit()
        continue

    elif num==4:
        print(d[4])
        continue

        # exit()
    elif num==5:
        print(d[5])

        continue
        # exit()
    for i in range(6,num+1):
        d[i]=d[i-5]+d[i-1]
    print(d[num])