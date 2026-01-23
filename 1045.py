a, b, c = map(float, input().split())

a, b, c = sorted([a, b, c], reverse=True)

if a >= b + c:
    print("NAO FORMA TRIANGULO")
else:
    if a * a == b * b + c * c:
        print("TRIANGULO RETANGULO")
    elif a * a > b * b + c * c:
        print("TRIANGULO OBTUSANGULO")
    else:
        print("TRIANGULO ACUTANGULO")

    if a == b and a == c:
        print("TRIANGULO EQUILATERO")
    elif a == b or a == c or b == c:
        print("TRIANGULO ISOSCELES")