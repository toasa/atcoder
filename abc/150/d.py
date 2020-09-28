import math
from functools import reduce

def lcm_base(x, y):
    return (x * y) // math.gcd(x, y)

def lcm_list(nums):
    return reduce(lcm_base, nums, 1)

def main():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))

    m_list = [0] * N
    for i, a in enumerate(A):
        e = a // 2;
        if e % 2 == 0:
            print(0)
            return
        m_list[i] = e

    m = lcm_list(m_list)
    
    M_div_m = M // m
    if M_div_m % 2 == 0:
        print(M_div_m // 2)
    else:
        print((M_div_m + 1) // 2)

main()
