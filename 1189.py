def func():
    s = 0
    for i in range(12):
        for j in range(12):
            n = float(input())
            if j < 5 and (i + j < 11 and i > j):
                s += n
    return s

carac = input().strip()
s = func()

if carac == 'S':
    print(f"{s:.1f}")
elif carac == 'M':
    avg = s / 30
    print(f"{avg:.1f}")
