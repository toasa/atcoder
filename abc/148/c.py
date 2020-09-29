import math

A, B = map(int, input().split())

res = A * B // math.gcd(A, B)
print(res)
