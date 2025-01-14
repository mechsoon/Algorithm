d=[1]*10100

for i in range(1,10002):
    temp=str(i)
    answer=0
    for j in temp:
        answer+=int(j)
    answer+=i
    # print(answer)
    d[answer]=0


for i in range(1,10000):
    if d[i]:
        print(i)