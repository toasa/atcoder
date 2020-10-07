import heapq

N, M = map(int, input().split())
A = list(map(int, input().split()))
A = list(map(lambda x: -x, A))

heapq.heapify(A)

for _ in range(M):
    m = -1 * heapq.heappop(A)
    heapq.heappush(A, -1 * (m // 2))

print(-1 * sum(A))
