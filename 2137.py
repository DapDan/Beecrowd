import sys

while True:
    line = sys.stdin.readline()
    if not line:
        break

    n = int(line)
    books = [sys.stdin.readline().strip() for _ in range(n)]

    books.sort()

    for b in books:
        print(b)
