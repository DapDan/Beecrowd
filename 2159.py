import math

n = float(input())

P = n / math.log(n)
M = 1.25506 * (n / math.log(n))

print(f"{P:.1f} {M:.1f}")