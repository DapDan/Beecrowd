def func():
    s = 0
    for i in range(12):
        for j in range(12):
            n = float(input())
            if j > i:
                s = s + n
    return s

carac = input().strip()
s = avg = 0
if carac == 'S':
    s = func()
    print(f"{avg:.1f}")
elif carac == 'M':
    s = func()
    avg = s / 66
    print(f"{avg:.1f}")


