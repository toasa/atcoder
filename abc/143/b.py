N = int(input())
D = list(map(int, input().split()))

res = 0
for i in range(0, N-1):
    for j in range(i+1, N):
        res += D[i] * D[j]

print(res)
