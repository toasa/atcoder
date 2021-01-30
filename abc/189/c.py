N = int(input())
A = list(map(int, input().split()))

ans = -1

for l in range(0, N):
    ringo = A[l]
    for r in range(l+1, N+1):
        ringo = min(ringo, A[r-1])
        ans = max(ans, (r-l)*ringo)

print(ans)
