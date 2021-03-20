x = input()

decimal_point = -1

for i, c in enumerate(x):
    if c == ".":
        decimal_point = i
        break

if decimal_point == -1:
    print(x)
else:
    print(x[:decimal_point])
