def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result


def nth_permutation(digits, n):
    if not digits:
        return ""

    number_of_digits = len(digits)
    words_per_starting_digit = factorial(number_of_digits-1)

    num_of_current_permutation = words_per_starting_digit
    starting_digit_index = 0

    while num_of_current_permutation < n:
        num_of_current_permutation += words_per_starting_digit
        starting_digit_index += 1

    starting_digit = digits[starting_digit_index]
    digits.remove(starting_digit)

    return str(starting_digit) + nth_permutation(digits, n - (starting_digit_index * words_per_starting_digit))


print(nth_permutation([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 1000000))
