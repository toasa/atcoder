import fraction
from functools import reduce

def gcd(*numbers):
    return reduce(math.gcd, numbers)

n = int(input())
a = list(map(int,input().split()))

print(gcd(*a))
