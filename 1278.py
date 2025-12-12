def limpaEspaco(s):
    palavras = s.split()
    return ' '.join(palavras)

primeiro_caso = True

while True:
    n = int(input())
    if n == 0:
        break

    linhas = []
    maior = 0

    for i in range(n):
        linha = input()
        limpa = limpaEspaco(linha)
        linhas.append(limpa)

        if len(limpa) > maior:
            maior = len(limpa)

    if not primeiro_caso:
        print()
    primeiro_caso = False

    for l in linhas:
        print(l.rjust(maior))