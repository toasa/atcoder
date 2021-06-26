N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

A = list(map(lambda x: x-1, A))
B = list(map(lambda x: x-1, B))
C = list(map(lambda x: x-1, C))

count = [0] * N
for j in range(N):
    count[B[C[j]]] += 1

res = 0
for i in range(N):
    res += count[A[i]]

print(res)
