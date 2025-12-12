x = float(input())
N = []

N.append(x)

for i in range(1, 100):
    x /= 2
    N.append(x)

for i in range(0, 100):
    print(f"N[{i}] = {N[i]:.4f}")
