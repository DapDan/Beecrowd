import math

while True:
    try:
        degree, distance, elves = map(float, input().split())

        rad = math.radians(degree)

        height = distance * math.tan(rad)
        height += elves
        height *= 5

        print(f"{height:.2f}")

    except EOFError:
        break