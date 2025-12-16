teste = 0

while True:
    n = int(input())
    if n == 0:
        break

    teste += 1
    winner = 0

    nums = list(map(int, input().split()))
    for i, num in enumerate(nums, start=1):
        if num == i:
            winner = num

    print(f"Teste {teste}")
    print(winner)
    print()
