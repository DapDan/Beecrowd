while True:
    n = int(input())
    if n == 0:
        break

    commands = input()
    direcao = ['N', 'L', 'S', 'O']

    indice = 0
    for i in range(n):
        if commands[i] == 'D':
            indice = (indice + 1) % 4
        elif commands[i] == 'E':
            indice = (indice - 1 + 4) %  4

    print(direcao[indice])