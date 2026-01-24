n = int(input())

for i in range(n):
    m = int(input())

    original = list(map(int, input().split()))
    ordenado = sorted(original, reverse=True)
    changes = 0

    for j in range(m):
        if original[j] == ordenado[j]:
            changes += 1

    print(changes)

