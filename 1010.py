prod1_code, prod1_units, prod1_price = input().split()
prod1_code = int(prod1_code)
prod1_units = int(prod1_units)
prod1_price = float(prod1_price)

prod2_code, prod2_units, prod2_price = input().split()
prod2_code = int(prod2_code)
prod2_units = int(prod2_units)
prod2_price = float(prod2_price)

total = (prod1_units * prod1_price) + (prod2_units * prod2_price)

print(f"VALOR A PAGAR: R$ {total:.2f}")