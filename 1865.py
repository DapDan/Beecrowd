N = int(input())

for i in range(N):
    expression = input().split()
    name = expression[0]
    force = expression[1]

    if name == 'Thor':
        print("Y")
    else:
        print("N")