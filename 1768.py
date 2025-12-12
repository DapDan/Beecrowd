while True:
    try:
        n = int(input())

        for i in range(1, n + 1, 2):
            spaces = (n - i) // 2
            print(" " * spaces + "*" * i)

        for width in [1, 3]:
            spaces = (n - width) // 2
            print(" " * spaces + "*" * width)

        print()

    except EOFError:
        break