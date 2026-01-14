while True:
    n = int(input())
    if n == 0:
        break

    pilha = []
    entrada = input().split()
    saida = input().split()
    output = []

    i = 0
    j = 0
    flag = 0

    while i <= n - 1:
        pilha.append(entrada[i])
        output.append('I')
        i += 1

        while pilha and j < n and pilha[-1] == saida[j]:
            pilha.pop()
            output.append('R')
            j += 1
            flag += 1

    if flag == n:
        print(''.join(output))
    else:
        print(f"{''.join(output)} Impossible")
