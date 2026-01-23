while True:
    n = int(input())
    if n == 0:
        break

    maior = maior2 = -1
    idx1 = idx2 = 0

    nums = list(map(int, input().split()))

    for i, num in enumerate(nums, start=1):
        if num > maior:
            maior2 = maior
            idx2 = idx1

            maior = num
            idx1 = i
        elif num > maior2:
            maior2 = num
            idx2 = i

    print(idx2)
