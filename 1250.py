n = int(input())

for i in range(n):
    s = int(input())
    v = list(map(int, input().split()))
    jumps = input().strip()

    hit = 0
    for j in range(s):
        if jumps[j] == 'J' and v[j] > 2:
            hit += 1
        elif jumps[j] == 'S' and v[j] <= 2:
            hit += 1

    print(hit)