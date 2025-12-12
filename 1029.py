def precompute_fib(max_n):
    fib = [0] * (max_n + 2)
    fib[0] = 0
    fib[1] = 1
    for i in range(2, max_n + 2):
        fib[i] = fib[i - 1] + fib[i - 2]
    return fib

cases = int(input())
inputs = [int(input()) for _ in range(cases)]
max_n = max(inputs)

fib = precompute_fib(max_n + 1)

for num in inputs:
    calls = fib[num]
    total_calls = 2 * fib[num + 1] - 2
    print(f"fib({num}) = {total_calls} calls = {calls}")