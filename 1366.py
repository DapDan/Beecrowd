while True:
    n = int(input())
    if n == 0:
        break

    pares = 0
    for i in range(n):
        ci, vi = map(int, input().split())
        pares += int(vi // 2)

    pares //= 2
    print(pares)
