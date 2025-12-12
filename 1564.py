while True:
    try:
        n = int(input())
        if n == 0:
            print("vai ter copa!\n")
        else:
            print("vai ter duas!\n")
    except EOFError:
        break