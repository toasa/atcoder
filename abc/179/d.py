N, K = map(int, input().split())

valid_nums = [False] * (N+1)
for i in range(K):
    l, r = map(int, input().split())
    for j in range(l, r+1):
        valid_nums[j] = True

# dp[i] はマスiに到達する方法の個数
dp = [0] * (N+1)
dp[1] = 1

for i in range(2, N+1):
    # dp[i] を埋めていく
    dp[i]
