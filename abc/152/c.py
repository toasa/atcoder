N = int(input())
P = list(map(int, input().split()))

# min_arr[i]: P[0], ... ,P[i]の中の最小値
min_arr = [P[0]] * N
for i in range(1, N):
    min_arr[i] = min(min_arr[i-1], P[i])

result = 0
for i, p in enumerate(P):
    if p == min_arr[i]:
        result += 1

print(result)
