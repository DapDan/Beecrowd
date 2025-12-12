while True:
    n = int(input())

    if n == -1:
        break

    values = list(map(int, input().split()))
    sum = count = 0

    for num in values:
        sum += num

        if sum % 100 == 0:
            sum = 0
            count += 1

    print(count)