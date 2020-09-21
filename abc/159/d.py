def nC2(n):
    if n <= 1:
        return 0
    return n * (n - 1) // 2

N = int(input())
A = list(map(int, input().split()))
A = list(map(lambda x: x - 1, A))

A_count = [0] * N
for a in A:
    A_count[a] += 1

combis = [0] * N
for i, a in enumerate(A_count):
    combis[i] = nC2(a)

combis_m1 = [0] * N
for i, a in enumerate(A_count):
    combis_m1[i] = nC2(a-1)

total_sum = sum(combis)
for a in A:
    print(total_sum - combis[a] + combis_m1[a])
