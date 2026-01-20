def desloca3bytes(str):
    nova = ""
    for c in str:
        if ('A' <= c <= 'Z') or ('a' <= c <= 'z'):
            nova += chr(ord(c) + 3)
        else:
            nova += c

    return nova

def move1byteesquerda(linha):
    tam = len(linha)
    metade = tam // 2

    nova = list(linha)  # transforma string em lista (mutável)
    for j in range(metade, tam):
        nova[j] = chr(ord(nova[j]) - 1)

    return "".join(nova)


n = int(input())
for i in range(n):
    linha = input()

    linha = desloca3bytes(linha)
    linha = linha[::-1]
    linha = move1byteesquerda(linha)

    print(linha)
