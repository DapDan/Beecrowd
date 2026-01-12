f = [0] * 46

f[0] = f[1] = 1
for i in range(2, 46):
    f[i] = f[i - 1] + f[i - 2]

while True:
    n = int(input())
    if n == 0:
        break

    print(f[n])