valor = float(input())

centavos = int(valor * 100 + 0.5)

notas = [10000, 5000, 2000, 1000, 500, 200]
moedas = [100, 50, 25, 10, 5, 1]

print("NOTAS:")
for nota in notas:
    qtd = centavos // nota
    centavos %= nota
    print(f"{qtd} nota(s) de R$ {nota/100:.2f}")

print("MOEDAS:")
for moeda in moedas:
    qtd = centavos // moeda
    centavos %= moeda
    print(f"{qtd} moeda(s) de R$ {moeda/100:.2f}")
