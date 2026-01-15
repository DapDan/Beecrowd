n = int(input())

for i in range(n):
    balance = 0
    contador = 0
    expressao = input()
    tamExp = len(expressao)

    for j in range(tamExp):
        if expressao[j] == '<':
            balance += 1
        elif balance > 0 and expressao[j] == '>':
            balance -= 1
            contador += 1

    print(contador)
