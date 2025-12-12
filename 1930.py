t1, t2, t3, t4 = map(int, input().split())
maior = max(t1, t2, t3, t4)
soma = maior + (t1 + t2 + t3 + t4 - maior) - 3
print(soma)