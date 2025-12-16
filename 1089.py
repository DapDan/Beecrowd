while True:
    n = int(input())
    if n == 0:
        break

    v = list(map(int, input().split()))

    count = 0
    for i in range(n):
        anterior = v[(i - 1 + n) % n]
        proximo = v[(i + 1) % n]

        if (v[i] > anterior and v[i] > proximo) or (v[i] < anterior and v[i] < proximo):
            count += 1

    print(count)