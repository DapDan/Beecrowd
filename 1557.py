while True:
    n = int(input())
    if n == 0:
        break

    # calcula largura do maior número
    maior = 2 ** (2 * (n - 1))
    width = 0
    temp = maior
    while temp > 0:
        temp //= 10
        width += 1

    count = 0
    for i in range(n):
        a = 0
        linha = ""
        for j in range(n):
            aux = 2 ** count
            if j == 0:
                linha += f"{aux:>{width}}"
            else:
                linha += f" {aux:>{width}}"
            count += 1
            a += 1
        count = count - (a - 1)
        print(linha)
    print()
