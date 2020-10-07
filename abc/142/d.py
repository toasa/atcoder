import math

def common_divisors(a, b):
    res = []
    if b < a:
        a, b = b, a

    limit = int(math.sqrt(a))
    for i in range(1, limit+1):
        if (a % i == 0) and (b % i == 0):
            res.append(i)
            if (i != a//i) and (b % (a//i) == 0):
                res.append(a//i)
    return sorted(res)

def prime_factorization(n):
    res = []
    limit = int(math.sqrt(n))
    for p in range(2, limit+1):
        if n % p != 0:
            continue
        times = 0
        while n % p == 0:
            times += 1
            n //= p
        res.append((n, times))

    if n != 1:
        res.append((n, 1))
    return res

    # res = []
    # data = [ i for i in range(2, n) ]
    # data.append(n)

    # while len(data) > 0:
    #     p = data[0]
    #     if n % p == 0:
    #         tmp_n = n // p
    #         times = 1
    #         while tmp_n % p == 0:
    #             tmp_n //= p
    #             times += 1
    #         res.append((p, times))
    #     data = [ d for d in data[1:] if d % p != 0 ]

    # return res

# A, B = map(int, input().split())
# divs = common_divisors(A, B)
# 
# # 先頭の1を削除（ええんかいな？）
# divs = divs[1:]
# primes = []
# 
# while len(divs) > 0:
#     p = divs[0]
#     primes.append(p)
#     divs = [ d for d in divs if d % p != 0 ]
# 
# print(len(primes) + 1)

# A, B = map(int, input().split())
# g = math.gcd(A, B)
# primes = prime_factorization(g)
# res = 1
# for p in primes:
#     res += 1
# print(res)

n = int(input())
print(prime_factorization(n))
