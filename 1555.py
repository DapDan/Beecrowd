def rafael(x, y):
    return (3 * x) ** 2 + y ** 2

def beto(x, y):
    return 2 * (x ** 2) + (5 * y) ** 2

def carlos(x, y):
    return (-100 * x) + (y ** 3)


N = int(input())
for _ in range(N):
    x, y = map(int, input().split())

    r = rafael(x, y)
    b = beto(x, y)
    c = carlos(x, y)

    if r > b and r > c:
        print("Rafael ganhou")
    elif b > r and b > c:
        print("Beto ganhou")
    else:
        print("Carlos ganhou")