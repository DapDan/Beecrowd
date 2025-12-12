def powerCrisis(N, k):
    if N == 1:
        return 1
    return (powerCrisis(N - 1, k) + k - 1) % N + 1

while (N := int(input())) != 0:
    k = 1
    while powerCrisis(N - 1, k) != 12:
        k += 1

    print(f"{k}")
