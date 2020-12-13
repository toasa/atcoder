import math

def C(n, r):
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))

L = int(input())
ans = C(L-1, 11)
print(ans)

