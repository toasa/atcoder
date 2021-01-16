N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A_max_index = [0] * N
tmp_max = A[0]
tmp_max_i = 0
for i in range(N):
    if tmp_max < A[i]:
        tmp_max = A[i]
        tmp_max_i = i
        A_max_index[i] = i
    else:
        A_max_index[i] = tmp_max_i

C = [0] * N
C[0] = A[0] * B[0]

for k in range(1, N):
    C[k] = max(C[k-1], B[k]*A[A_max_index[k]])

for c in C:
    print(c)

