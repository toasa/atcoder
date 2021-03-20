import math

N = int(input())
count = 0

i = 1
while True:
    n = int(str(i)+str(i))
    if n > N:
        break
    count += 1
    i += 1

print(count)

