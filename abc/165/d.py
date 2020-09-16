import math

A, B, N = map(int, input().split())
n = min(N, B-1)
print(math.floor(A * n / B))
