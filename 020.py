def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i;
    return result


def sum_digits(n):
    total = 0
    for digit in str(n):
        total += int(digit)
    return total


print(sum_digits(factorial(100)))
