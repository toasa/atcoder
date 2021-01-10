N, C = map(int, input().split())
A = [0] * N
B = [0] * N
C = [0] * N

cost_days = [0] * (10**9+100)
for i in range(N):
    a, b, c = map(int, input().split())
    a, b = a-1, b-1
    cost_days[a] += c
    cost_days[b+1] -= c

# 累積和
for i in range(1, N):
    cost_days[i] += cost_days[i-1]

cost_days = cost_days[:5]
print(cost_days)
