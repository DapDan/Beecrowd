n = int(input())
v = list(map(int, input().split()))

count = 0
for i in v:
    if i == n:
        count += 1

print(count)