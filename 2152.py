n = int(input())

for _ in range(n):
    h, m, o = map(int, input().split())
    msg = "abriu" if o == 1 else "fechou"
    print(f"{h:02d}:{m:02d} - A porta {msg}!")
