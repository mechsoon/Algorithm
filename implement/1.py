s=list(input())
s.sort()

result=0
index=0
for i in s:
    if ord(i)>64:
        continue
    else:
        result+=int(i)
        index+=1
for i in range(index,len(s)):
    print(s[i],end="")
print(result)

