teste = 1

while True:
    V = int(input())
    if V == 0:
        break

    I = V // 50
    V %= 50

    J = V // 10
    V %= 10

    K = V // 5
    V %= 5

    L = V

    print(f"Teste {teste}")
    print(f"{I} {J} {K} {L}\n")
    teste += 1
