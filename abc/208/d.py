N, M = map(int, input().split())
MAX_COST = 2 ** 64
costs = [ [MAX_COST] * N for i in range(N) ]

for i in range(M):
    a, b, c = map(int, input().split())
    costs[a][b] = c

for i in range(N):
    costs[i][i] = 0

