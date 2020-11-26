A, B, C = map(int, input().split())

dp = [[[0 for _ in range(110)] for _ in range(110)] for _ in range(110)]

for i in range(99, -1, -1):
    for j in range(99, -1, -1):
        for k in range(99, -1, -1):
            if i == j == k == 0:
                continue
            dp[i][j][k] = (i/(i+j+k))*(dp[i+1][j][k]+1) + (j/(i+j+k))*(dp[i][j+1][k]+1) + (k/(i+j+k))*(dp[i][j][k+1]+1)

print(dp[A][B][C])
