t = int(input())

for i in range(t):
    dados = list(map(int, input().split()))
    n = dados[0]
    idades = dados[1:]
    
    print(f"Case {i + 1}: {idades[n // 2]}")
