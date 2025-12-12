p = int(input())
total = 0

prices = {
    1001: 1.50,
    1002: 2.50,
    1003: 3.50,
    1004: 4.50,
    1005: 5.50
}

for i in range(p):
    code, q = map(int, input().split())
    total += prices[code] * q

print(f"{total:.2f}")
