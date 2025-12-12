while True:
    try:
        n = int(input())
        for i in range(n):
            linha = ""
            for j in range(n):
                if i + j == n - 1:      # diagonal secundária
                    aux = 2
                elif i == j:            # diagonal principal
                    aux = 1
                else:                   # resto
                    aux = 3
                linha += str(aux)
            print(linha)
    except EOFError:
        break
