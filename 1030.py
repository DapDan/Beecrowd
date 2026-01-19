def josephus(n, k):
    res = 0
    for i in range(1, n + 1):
        res = (res + k) % i
    return res + 1

tam = int(input())
for i in range(tam):
    n, k = map(int, input().split())
    res = josephus(n, k)
    print(f"Case {i + 1}: {res}")