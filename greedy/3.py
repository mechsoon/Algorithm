# 0과 1중에서 적은 애를 계속 뒤집다가 모두 같은 것이 올 때 멈추면 되지 않을까?
# 
sentence=input()
m=0
ZeroCount=sentence.count("0")
OneCount=sentence.count("1")
while True:
    if ZeroCount<OneCount:
        sentence=sentence.replace("0","1")
        m+=1
        ZeroCount=sentence.count("0")
        OneCount=sentence.count("1")
        if ZeroCount==OneCount:
            break;
    elif ZeroCount>OneCount:
        sentence=sentence.replace("1","0")
        m+=1
        ZeroCount=sentence.count("0")
        OneCount=sentence.count("1")
        if ZeroCount==OneCount:
            break;
print(m)