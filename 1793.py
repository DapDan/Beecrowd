import sys

data = list(map(int, sys.stdin.read().split()))
pos = 0

while True:
    N = data[pos]
    pos += 1
    if N == 0:
        break

    arrive = data[pos:pos+N]
    pos += N

    total = 10  # primeira pessoa liga a escada por 10s

    for i in range(1, N):
        if arrive[i] < arrive[i - 1] + 10:
            total += arrive[i] - arrive[i - 1]
        else:
            total += 10

    print(total)
