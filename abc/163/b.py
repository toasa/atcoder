N, M = map(int, input().split())
A = list(map(int, input().split()))

total_days = sum(A)

if total_days <= N:
    print(N - total_days)
else:
    print(-1)
