n = int(input())

for i in range(n):
    linha = input()

    a = int(linha[0])
    b = int(linha[2])

    if a == b:
        res = a * b
    else:
        if linha[1].isupper():
            res = b - a
        else:
            res = a + b

    print(res)