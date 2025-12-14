c = int(input())

for i in range(c):
    b, e = map(int, input().split())

    seq = ""

    for j in range(b, e + 1):
        seq += str(j)

    inv = seq[::-1]

    print(seq + inv)