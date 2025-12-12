N = []

for i in range(20):
    N.append(int(input()))

# N = list(map(int, input().split()))

j = 19
for i in range(10):
    aux = N[i]
    N[i] = N[j]
    N[j] = aux
    j -= 1

for i in range(20):
    print(f"N[{i}] = {N[i]}")
