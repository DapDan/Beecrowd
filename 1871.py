while True:
    try:
        n1, n2 = map(int, input().split())
    except EOFError:
        break  # acabou a entrada
    if n1 == 0 and n2 == 0:
        break

    sum = n1 + n2
    sum = str(sum)
    sum = sum.replace("0", "")

    print(sum)