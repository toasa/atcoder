def fac(n):
    if n == 1:
        return 1
    return n * fac(n - 1)

def C(n, r):
    return fac(n) // (fac(r) * fac(n - r))

n, a, b = map(int, input().split())
rem = 10 ** 9 + 7

result = (2 ** n % rem) - C(n, a) - C(n, b) - 1
result %= rem
print(result)
