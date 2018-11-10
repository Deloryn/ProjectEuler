def proper_divisors(n):
    result = []
    for i in range(1, n):
        if n%i == 0:
            result.append(i)
    return result


def is_sum_of_two_abundants(n, abundants):
    for i in range(1, n//2 + 2):
        if abundants[i] and abundants[n-i]:
            return True
    return False


def abundants(upper_bound):
    abundants = {}
    for i in range(upper_bound):
        if sum(proper_divisors(i)) > i:
            abundants[i] = True
        else:
            abundants[i] = False
    return abundants



abundants = abundants(28125)
total = 0
for i in range(1, 28124):
    if not is_sum_of_two_abundants(i, abundants):
        total += i

print(total)
