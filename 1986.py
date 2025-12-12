n = input()
codigos = input().split()

for h in codigos:
    print(chr(int(h, 16)), end="")

print()