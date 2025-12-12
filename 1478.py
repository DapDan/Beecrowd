while True:
    num = int(input())
    if num == 0:
        break

    for i in range(num):
        for j in range(num):
            valor = abs(i - j) + 1
            if j == 0:
                print(f"{valor:3d}", end="")
            else:
                print(f" {valor:3d}", end="")
        print()
    print()
