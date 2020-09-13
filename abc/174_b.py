import math

def dis(x, y):
    return math.sqrt(x * x + y * y)

N, D = map(int, input().split())

result = 0
for i in range(N):
    x, y = map(int, input().split())
    if dis(x, y) <= D:
        result += 1

print(result)

