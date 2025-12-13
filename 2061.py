n, m = map(int, input().split())

total = n

for i in range(m):
    action = input().strip()

    if action == "fechou":
        total += 1
    else:
        total -= 1

print(total)
