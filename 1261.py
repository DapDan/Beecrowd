import sys

m, n = map(int, sys.stdin.readline().split())

dict_words = {}

for _ in range(m):
    word, value = sys.stdin.readline().split()
    dict_words[word] = int(value)

for _ in range(n):
    total = 0
    while True:
        line = sys.stdin.readline().strip()
        if line == ".":
            break
        for word in line.split():
            total += dict_words.get(word, 0)
    print(total)
