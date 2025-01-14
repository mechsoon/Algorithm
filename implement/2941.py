s=input()

dictionary={"c=":"č","c-":"ć","dz=":"dž","d-":"đ","s=":"š","z=":"ž","nj":"nj","lj":"lj"}
answer=len(s)
for i in dictionary.keys():
    if i in s:
        temp=s.count(i)
        # print(i)
        answer-=temp
print(answer)
