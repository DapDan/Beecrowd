s = input()
count = s.count("1")

if count % 2 == 0:
    s += "0"
else:
    s += "1"

print(s)