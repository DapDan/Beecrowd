valores = input().split()
a = float(valores[0])
b = float(valores[1])
c = float(valores[2])

areaRetTri = (a * c) / 2
areaCir =  3.14159 * (c * c)
areaTrap = ((a + b) * c ) / 2
areaSquare =  (b * b)
areaRet = (a * b)

print(f"TRIANGULO: {areaRetTri:.3f}")
print(f"CIRCULO: {areaCir:.3f}")
print(f"TRAPEZIO: {areaTrap:.3f}")
print(f"QUADRADO: {areaSquare:.3f}")
print(f"RETANGULO: {areaRet:.3f}")