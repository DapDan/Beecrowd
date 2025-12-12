def get_col(m, j):
    return m[0][j] * 1000 + m[1][j] * 100 + m[2][j] * 10 + m[3][j]

temp = [input().strip() for _ in range(4)]
N = len(temp[0])

m = [[int(temp[i][j]) for j in range(N)] for i in range(4)]

F = get_col(m, 0)
L = get_col(m, N - 1)

result = []
for j in range(1, N - 1):
    Mi = get_col(m, j)
    Ci = (F * Mi + L) % 257
    result.append(chr(Ci))

print("".join(result))
