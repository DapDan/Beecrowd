N = int(input())

if N == 0:
    print(f"{3.0:.10f}")
else:
    x = 6.0
    for _ in range(1, N):
        x = 6.0 + 1.0 / x

    ans = 3.0 + 1.0 / x
    print(f"{ans:.10f}")
