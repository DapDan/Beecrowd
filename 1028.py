def mdc(f1, f2):
    if(f1 % f2 == 0):
        return f2
    else:
        return mdc(f2, f1 % f2)

cases = (int(input()))

for i in range(cases):
    valores = input().split()
    f1 = int(valores[0])
    f2 = int(valores[1])

    print(mdc(f1, f2))