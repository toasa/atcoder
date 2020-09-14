N = int(input())

def factorization(n):
    arr = []
    temp = n
    for i in range(2, int(-(-n**0.5//1))+1):
        if temp%i==0:
            cnt=0
            while temp%i==0:
                cnt+=1
                temp //= i
            arr.append([i, cnt])

    if temp!=1:
        arr.append([temp, 1])

    if arr==[]:
        arr.append([n, 1])

    return arr

def f(n):
    results = factorization(n)
    prod = 1
    for p in results:
        if p[0] == 1:
            prod *= p[1]
        else:
            prod *= (p[1] + 1)
    return prod


result = 0
for i in range(1, N+1):
    result += i * f(i)

print(result)

