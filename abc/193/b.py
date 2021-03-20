N = int(input())
A, P, X = [0]*N, [0]*N, [0]*N
for i in range(N):
    A[i], P[i], X[i] = map(int, input().split())

for i in range(N):
    X[i] = max(0, X[i]-A[i])

min_cost = 10**10
for i in range(N):
    if X[i] > 0:
        min_cost = min(min_cost, P[i])

print(min_cost if min_cost != 10**10 else -1)

