def sheldon_wins(a, b):
    return ((a == "tesoura" and b == "papel") or
            (a == "papel" and b == "pedra") or
            (a == "pedra" and b == "lagarto") or
            (a == "lagarto" and b == "Spock") or
            (a == "Spock" and b == "tesoura") or
            (a == "tesoura" and b == "lagarto") or
            (a == "lagarto" and b == "papel") or
            (a == "papel" and b == "Spock") or
            (a == "Spock" and b == "pedra") or
            (a == "pedra" and b == "tesoura"))

n = int(input())
for i in range(1, n + 1):
    opcao1, opcao2 = input().split()
    if opcao1 == opcao2:
        print(f"Caso #{i}: De novo!")
    elif sheldon_wins(opcao1, opcao2):
        print(f"Caso #{i}: Bazinga!")
    else:
        print(f"Caso #{i}: Raj trapaceou!")