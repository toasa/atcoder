import math

def l2(n):
    return 1 + int(math.log2(n))

H = int(input())
S = 2 ** l2(H) - 1
print(S)
