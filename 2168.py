n = int(input())
n += 1

m = []
for i in range(n):
    linha = list(map(int, input().split()))
    m.append(linha)

for i in range(n - 1):
    for j in range(n - 1):
        count = 0
        if m[i][j] == 1:
            count += 1
        if m[i + 1][j] == 1:
            count += 1
        if m[i][j + 1] == 1:
            count += 1
        if m[i + 1][j + 1] == 1:
            count += 1

        if count >= 2:
            print("S", end="")
        else:
            print("U", end="")
    print()