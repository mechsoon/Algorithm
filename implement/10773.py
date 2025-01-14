n=int(input())

num=[]
for _ in range(n):
    k=int(input())
    if k==0:
        num.pop()
        continue
    num.append(k)
print(sum(num))
    