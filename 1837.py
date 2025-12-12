a, b = map(int, input().split())

q = a // b
r = a % b

if r < 0:
    r += abs(b)
    if b > 0:
        q -= 1
    else:
        q += 1

print(q, r)