n = int(input())

for i in range(n):
    QT, S = map(int, input().split())

    menor = 1000
    pos = 0
    quesses = list(map(int, input().split()))
    for j, quess in enumerate(quesses):
        diff = abs(S - quess)
        if diff < menor:
            menor = diff
            pos = j + 1

    print(pos)

