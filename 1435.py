while True:
    num = int(input())
    if num == 0:
        break

    for i in range(num):
        for j in range(num):
            if i < num - i:
                x = i
            else:
                x = num - i - 1

            if j < num - j:
                y = j
            else:
                y = num - j - 1

            if x < y:
                val = x + 1
            else:
                val = y + 1

            if j == 0:
                print(f"{val:3d}", end="")
            else:
                print(f" {val:3d}", end="")
        print()
    print()      
