import math

K = int(input())

g = []
for i in range(1, K+1):
    for j in range(1, K+1):
        g.append(math.gcd(i, j))

result = 0
for i in range(1, K+1):
    for t in g:
        result += math.gcd(i, t)

print(result)

