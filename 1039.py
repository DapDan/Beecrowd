while True:
    try:
        r1, x1, y1, r2, x2, y2 = map(int, input().split())

        dx = (x2 - x1)
        dy = (y2 - y1)

        dist = (dx * dx) + (dy * dy)
        diffRaio = r1 - r2

        if diffRaio >= 0 and dist <= diffRaio * diffRaio:
            print("RICO")
        else:
            print("MORTO")

    except EOFError:
            break