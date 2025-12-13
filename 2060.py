n = int(input())
valores = list(map(int, input().split()))
divisores = [2, 3, 4, 5]
cont = [0, 0, 0, 0]

for l in valores:
    for i in range(4):
        if l % divisores[i] == 0:
            cont[i] += 1

for i in range(4):
    print(f"{cont[i]} Multiplo(s) de {divisores[i]}")
