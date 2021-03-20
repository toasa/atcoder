N, M = map(int, input().split())

wants = [0] * N

A, B = [0] * M, [0] * M
for i in range(M):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    A[i], B[i] = a, b

K = int(input())
C, D = [0] * K, [0] * K
for i in range(K):
    c, d = map(int, input().split())
    c, d = c-1, d-1
    C[i], D[i] = c, d

res = 0
for i in range(2**K):
    dishes = [0] * N
    # bit が 0 => 皿 C へ置く
    # bit が 1 => 皿 D へ置く
    for k in range(K):
        if (i >> k) & 0b01 == 0b00:
            dishes[C[k]] += 1
        else:
            dishes[D[k]] += 1

    tmp = 0
    for j in range(M):
        if dishes[A[j]] > 0 and dishes[B[j]] > 0:
            tmp += 1
    res = max(res, tmp)

print(res)
