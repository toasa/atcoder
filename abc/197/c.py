import functools

N = int(input())
A = list(map(int, input().split()))

result = 2 ** 30

# bit 全探索
for i in range(2**(N-1)):
    l = []
    head = 0
    for j in range(N-1):
        if (i >> (N-2-j)) & 0b01 == 0b01:
            tail = j+1
            l.append(A[head:tail])
            head = tail

    l.append(A[head:])

    xors = []
    for l_ in l:
        xors.append(functools.reduce(lambda x, y:x|y, l_))

    tmp = functools.reduce(lambda x,y: x^y, xors)
    result = min(tmp, result)


print(result)

