def calculate_len_of_recurring_cycle(n):
    val = 1
    recurring_cycle = False
    reminders = []
    decimal_numbers = []
    while val%n != 0 and not recurring_cycle:
        i = 0
        while val//n == 0:
            if(i>0):
                decimal_numbers.append(0)
            i += 1
            val *= 10

        reminder = val%n
        if len(reminders) > 0:
            if reminder in reminders:
                return len(reminders)

        decimal_numbers.append(val//n)
        reminders.append(reminder)
        val = reminder

    return 0


max_cycle = 0
memorized_d = 1
for d in range(1, 1000):
    cycle = calculate_len_of_recurring_cycle(d)
    if cycle > max_cycle:
        max_cycle = cycle
        memorized_d = d

print(memorized_d)
