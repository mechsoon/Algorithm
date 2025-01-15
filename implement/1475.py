num = [1] * 10
m = input()

result = 1
for i in m:
    i = int(i)
    if num[i] > 0:
        num[i] -= 1
    elif (i == 6 or i == 9) and (num[6] > 0 or num[9] > 0):
        # 숫자 6과 9는 교환 가능
        if i == 6 and num[9] > 0:
            num[9] -= 1
        elif i == 9 and num[6] > 0:
            num[6] -= 1
    else:
        # 새로운 세트 필요
        result += 1
        num = [x + 1 for x in num]
        num[i] -= 1

print(result)
