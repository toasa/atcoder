N = int(input())

# dp[i]: ちょうどi円を引き出すために必要な操作の最小回数
dp = [0] * (N + 1)

MAX = 10 ** 8

for i in range(1, N + 1):
    # 1
    dp1 = dp[i - 1] + 1

    # 6, 6 ** 2, 6 ** 3,...
    dp6 = MAX
    i6 = 1
    while 6 ** i6 <= i:
        dp6 = min(MAX, dp[i - 6 ** i6] + 1)
        i6 += 1

    # 9, 9 ** 2, 9 ** 3,...
    dp9 = MAX
    i9 = 1
    while 9 ** i9 <= i:
        dp9 = min(MAX, dp[i - 9 ** i9] + 1)
        i9 += 1

    dp[i] = min(dp1, dp6, dp9)

print(dp[N])


    

