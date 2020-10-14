import math

N = int(input())

res = 0
for i in range(1, N+1):
    ndigits = int(math.log10(i)) + 1
    if ndigits % 2 == 1:
        res += 1

print(res)
