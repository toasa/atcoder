N, K = map(int, input().split())

LR = [None] * K
for i in range(K):
    l, r = map(int, input().split())
    LR[i] = (l, r)

mod = 998244353

dp = [0] * (N+1)
dp[1] = 1

cdp = [0] * (N+1)
cdp[1] = 1

for i in range(1, N+1):
    for lr in LR:
        l = max(0, i - lr[1] - 1)
        r = max(0, i - lr[0])
        dp[i] += cdp[r] - cdp[l]
        dp[i] %= mod
    cdp[i] = dp[i] + cdp[i-1]
    cdp[i] %= mod

print(dp[N])
