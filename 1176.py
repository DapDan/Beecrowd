fib = [0, 1]  # Fib(0) = 0, Fib(1) = 1

for i in range(2, 61):
    fib.append(fib[i - 1] + fib[i - 2])  # Adiciona o próximo número de Fibonacci

cases = int(input())

for _ in range(cases):
    n = int(input())
    print(f"Fib({n}) = {fib[n]}")