import math

def m(X):
    res = 0
    for x in X:
        res += abs(x)
    return res

def e(X):
    res = 0
    for x in X:
        res += (x ** 2)
    return math.sqrt(res)

def t(X):
    res = -1
    for x in X:
        res = max(res, abs(x))
    return res

def main():
    N = int(input())
    X = list(map(int, input().split()))
    print(m(X))
    print(e(X))
    print(t(X))

main()
