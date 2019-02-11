from math import ceil

LENGTH = 1001

total = 0
total += sum([int(x**2) for x in range(1, LENGTH+1, 2)])
total += sum([int(x**2 + 1) for x in range(2, LENGTH, 2)])
total += sum([int(ceil((x**2 + (x+1)**2)//2)+1) for x in range(1, LENGTH-1, 2)])
total += sum([int(ceil((x**2 + (x+1)**2)//2)+1) for x in range(2, LENGTH, 2)])

print(int(total))
