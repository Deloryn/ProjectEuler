values = []

for a in range(2, 101):
    for b in range(2, 101):
        value = a ** b
        values.append(value)

result = len(set(values))
print(result)
