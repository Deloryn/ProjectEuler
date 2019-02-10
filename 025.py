has1000digits = False

fib1 = 1
fib2 = 1

i=3

while not has1000digits:
    next_fib = fib1 + fib2
    if(len(str(next_fib))==1000):
        has1000digits = True
        print(i)

    i += 1
    fib1 = fib2
    fib2 = next_fib
