H, W = map(int, input().split())
A = [ [0]*W for _ in range(H) ]

for i in range(H):
    A[i] = list(map(int, input().split()))

min_b = 200

for i in range(H):
    for j in range(W):
        a = A[i][j]
        if a < min_b:
            min_b = a

res = 0
for i in range(H):
    for j in range(W):
        res += A[i][j] - min_b

print(res)
