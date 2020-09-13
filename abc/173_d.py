N = int(input())
A = map(int, input().split())

sortA = sorted(A)

result = 0
for i in range(1, N):
    result += sortA[N - (i // 2) - 1]

print(result)

