def process_file(path):
    with open(path, 'r') as file:
        text = file.read()
    text = text.replace('"', '')
    names = text.split(',')
    return names


def count_name_score(name, position):
    total = 0
    for character in name:
        total += (ord(character)-64)
    return total * position


names = process_file("resources/p022_names.txt")
names.sort()

total_score = 0
position = 1
for name in names:
    total_score += count_name_score(name, position)
    position += 1

print(total_score)
