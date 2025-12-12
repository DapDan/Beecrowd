import math

while True:
    try:
        x, y = input().split()
        x = int(x)
        y = int(y)

        stakes = int((2 * (x + y)) / math.gcd(x, y))
        print(stakes)

    except EOFError:
        break