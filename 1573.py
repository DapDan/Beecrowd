while True:
    a, b, c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)

    if a == 0 and b == 0 and c == 0:
        break

    volCube = int((a * b * c) ** (1 / 3))
    print(volCube)