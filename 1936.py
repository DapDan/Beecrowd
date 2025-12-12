v = [1, 2, 6, 24, 120, 720, 5040, 40320]
N = int(input())
i = count = 0

for i in range(7, -1, -1):
    while v[i]  <= N:
        N -= v[i]
        count += 1
    
    if N == 0:
        break

print(count)