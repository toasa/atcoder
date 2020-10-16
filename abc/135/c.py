N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

res = 0
for i in range(N-1, -1, -1):
    b = B[i]
    if A[i+1] >= b:
        res += b
        A[i+1] -= b
        continue

    # assume that A[i+1] < b.
    res += A[i+1]
    b -= A[i+1]
    if A[i] >= b:
        res += b
        A[i] -= b
    else:
        res += A[i]
        A[i] = 0

print(res)

