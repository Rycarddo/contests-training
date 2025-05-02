lines = []
# creating the matriz
for i in range(5):
    line = list(map(int, input().split()))
    lines.append(line)
# looking for number 1
x = 0
for idx, element in enumerate(lines):
    if 1 in element:
        x = idx
        y = element.index(1)
# calculating the distance
print(abs(x - 2) + abs(y - 2))