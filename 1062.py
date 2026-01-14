while True:
    n = int(input())
    if n == 0:
        break

    while True:
        entrada = []
        saida = []
        pilha = []

        entrada = list(map(int, input().split()))
        if entrada[0] == 0:
            break

        for i in range(n):
            saida.append(i + 1)

        i = j = n - 1
        flag = 0

        while True:
            if (i >= 0 and j >= 0) and entrada[i] == saida[j]:
                i -= 1
                j -= 1
                flag += 1
            elif pilha and j >= 0 and pilha[-1] == saida[j]:
                pilha.pop()
                j -= 1
                flag += 1
            elif (i >= 0 and j >= 0) and entrada[i] != saida[j]:
                pilha.append(entrada[i])
                i -= 1
            else:
                break

        if flag == n:
            print("Yes")
        else:
            print("No")

    print()
