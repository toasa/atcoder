import math

P = int(input())

facs = [math.factorial(i) for i in range(1, 11)][::-1]

count = 0
for f in facs:
    if P == 0:
        break

    if f > P:
        continue

    # assume f <= P
    count += P // f
    P %= f

print(count)
