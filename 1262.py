import math

while True:
    try:
        trace = input().strip()
        procs = int(input())

        conta = 0
        i = 0
        tam = len(trace)

        while i < tam:
            if trace[i] == 'W':
                conta += 1
                i += 1
            else:  # é 'R'
                contaR = 0
                while i < tam and trace[i] == 'R':
                    contaR += 1
                    i += 1
                conta += math.ceil(contaR / procs)

        print(conta)

    except EOFError:
        break
