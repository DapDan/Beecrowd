import math

while True:
    a, b, c = map(int, input().split())
    if a == 0:
        break

    area = (a * b * 100) / c
    lado = int(math.sqrt(area))
    print(lado)