while True:
    try:
        n = int(input())
        ini = n//3
        fim = n - n//3 - 1
        array = []

        for i in range(n):
            array = []
            for j in range(n):
                if i == n//2 and j == n//2:
                    array.append(4)
                elif ini <= i <= fim and ini <= j <= fim:
                    array.append(1)
                elif i + j == n - 1:
                    array.append(3)
                elif i == j:
                    array.append(2)
                else:
                    array.append(0)

            print("".join(str(x) for x in array))
        print("")

    except EOFError:
        break