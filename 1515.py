while True:
    N = int(input())
    if N == 0:
        break

    menor = 10000
    pos = 0
    res = ' '
    for i in range(N):
        linha, A, T = input().split()
        A = int(A)
        T = int(T)

        if A - T < menor:
            menor = A - T
            pos = i
            res = linha

    print(res)
