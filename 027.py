def is_prime(n):
    if n<2:
        return False
    elif n == 2:
        return True
    else:
        for i in range(2, (n//2)+1):
            if n%i == 0:
                return False
        return True


def quadratic_value(n, a, b):
    return (n**2) + (a*n) + b


best_a = 0
best_b = 0

highest_num_of_primes = 0

for a in range(-999, 1000):
    for b in range(-1000, 1001):
        num_of_primes = 0
        n = 0
        while True:
            if is_prime(quadratic_value(n, a, b)):
                num_of_primes += 1
                n += 1
            else:
                break
        if num_of_primes > highest_num_of_primes:
            highest_num_of_primes = num_of_primes
            best_a = a
            best_b = b

print("Product: " + str(best_a * best_b))
print("Num of consecutive primes: " + str(highest_num_of_primes))
