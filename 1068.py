while True:
    try:
        entrada = input()
        balance = 0
        correct = True

        for c in entrada:
            if c == '(':
                balance += 1
            elif c == ')':
                balance -= 1
                if balance < 0:
                    correct = False
                    break

        if balance != 0:
            correct = False

        print("correct" if correct else "incorrect")

    except EOFError:
        break
