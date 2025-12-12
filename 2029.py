while True:
    try:
        v = float(input())
        d = float(input())
    except EOFError:
        break

    r = d / 2
    h = v / (3.14 * r * r)
    print(f"ALTURA = {h:.2f}")

    area = 3.14 * r * r
    print(f"AREA = {area:.2f}")