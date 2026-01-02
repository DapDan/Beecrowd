import math

t = int(input())

for i in range(t):
    n = int(input())
    res = 0
    for j in range(n):
        res += int(math.pow(2, j))
    print(res)
