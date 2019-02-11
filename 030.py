def is_sum_of_five_powers_of_digits(number):
    number_str = str(number)
    total = 0

    for digit_char in number_str:
        digit = int(digit_char)
        total += (digit ** 5)

    if total == number:
        return True
    else:
        return False


numbers_we_are_looking_for = []

i = 2
while i<10000000:
    if(is_sum_of_five_powers_of_digits(i)):
        numbers_we_are_looking_for.append(i)
    i += 1

result = sum(numbers_we_are_looking_for)
print(result)
