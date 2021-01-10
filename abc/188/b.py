N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

inner_product = 0
for i in range(N):
    inner_product += A[i] * B[i]

print("Yes" if inner_product == 0 else "No")

