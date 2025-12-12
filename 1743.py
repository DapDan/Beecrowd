x = list(map(int, input().split()))
y = list(map(int, input().split()))

flag = 1
for i in range(5):
    if x[i] == y[i]:
        flag = 0
        break

if flag == 0:
    print("N")
else:
    print("Y")