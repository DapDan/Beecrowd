import sys

for line in sys.stdin:
    A, B, C = map(int, line.split())

    if A == B and A == C:
        print("*")
    elif A == B and A != C:
        print("C")
    elif A == C and A != B:
        print("B")
    elif B == C and B != A:
        print("A")