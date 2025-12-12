N = int(input())
LA, LB = map(int, input().split())
SA, SB = map(int, input().split())

flag = 1

if LA <= N <= LB and SA <= N <= SB:
    flag = 0

if flag == 0:
    print("possivel")
else:
    print("impossivel")