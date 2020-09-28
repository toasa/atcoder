import math

def eratosthenes(n):
    limit = math.sqrt(n)
    primes = []
    data = [ i+1 for i in range(1, n) ]

    while True:
        p = data[0]
        if p >= limit:
            return primes + data
        primes.append(p)
        data = [ d for d in data if d % p != 0 ]

def main():
    X = int(input())
    primes_to_100003 = eratosthenes(100003)
    for p in primes_to_100003:
        if X <= p:
            print(p)
            return

main()

