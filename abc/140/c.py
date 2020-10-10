N = int(input())
B = list(map(int, input().split()))

res = B[0] + B[N-2]
for i in range(N-2):
    res += min(B[i], B[i+1])

print(res)
