def mdc(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def simplifica(n, d):
    m = mdc(n, d)
    n //= m
    d //= m
    if d < 0:
        n = -n
        d = -d
    return n, d

N = int(input())

for i in range(N):
    expr = input().strip()

    for c in "/+-*=":
        expr = expr.replace(c, f" {c} ")

    tokens = expr.split()

    n1 = int(tokens[0])
    d1 = int(tokens[2])
    op = tokens[3]
    n2 = int(tokens[4])
    d2 = int(tokens[6])

    if op == '+':
        nr = n1*d2 + n2*d1
        dr = d1*d2
    elif op == '-':
        nr = n1*d2 - n2*d1
        dr = d1*d2
    elif op == '*':
        nr = n1*n2
        dr = d1*d2
    else:
        nr = n1*d2
        dr = d1*n2

    s_nr, s_dr = simplifica(nr, dr)
    print(f"{nr}/{dr} = {s_nr}/{s_dr}")
