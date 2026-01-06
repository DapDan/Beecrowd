n = int(input())

for i in range(n):
    word = input().strip()

    if len(word) == 5:
        print(3)
    else:
        if (
            (word[0] == 'o' and word[1] == 'n') or
            (word[0] == 'o' and word[2] == 'e') or
            (word[1] == 'n' and word[2] == 'e')
        ):
            print(1)
        else:
            print(2)