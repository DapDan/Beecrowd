a, b, c = map(int, input().split())

if b < a and c >= b:
    flag = 1
elif (b > a) and (c > b):
    if c - b >= b - a:
        flag = 1
    else:
        flag = 0
elif a > b > c:
    if b - c < a - b:
        flag = 1
    else:
        flag = 0
elif a == b:
    if c > b:
        flag = 1
    else:
        flag = 0
else:
    flag = 0

if flag == 1:
    print(":)")
else:
    print(":(")