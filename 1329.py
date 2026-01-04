while True:
    n = int(input())
    if n == 0:
        break

    mary = 0
    john = 0

    nums = list(map(int, input().split()))

    for num in nums:
        if num == 0:
            mary += 1
        elif num == 1:
            john += 1

    print(f"Mary won {mary} times and John won {john} times")
