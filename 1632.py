t = int(input())
for i in range(t):
    possibility = 1
    s = input()
    for j  in range(len(s)):
        c = s[j]
        if (c == 'A' or c == 'a' or
                c == 'E' or c == 'e' or
                c == 'I' or c == 'i' or
                c == 'O' or c == 'o' or
                c == 'S' or c == 's'):
            possibility *= 3
        else:
            possibility *= 2

    print(possibility)