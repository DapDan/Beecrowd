T = int(input().strip())

for _ in range(T):
    D, I, B = map(int, input().split())
    preco = list(map(int, input().split()))

    max_bolos = 0

    for _ in range(B):
        dados = list(map(int, input().split()))
        Q = dados[0]
        custo = 0

        for j in range(Q):
            idx = dados[1 + 2*j]
            qtd = dados[2 + 2*j]
            custo += preco[idx] * qtd

        if custo > 0:
            qtd_bolos = D // custo
            max_bolos = max(max_bolos, qtd_bolos)

    print(max_bolos)
