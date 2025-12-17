n = int(input())

for i in range(n):
    principal, secundario = input().split()

    if principal.endswith(secundario):
        print("encaixa")
    else:
        print("nao encaixa")
