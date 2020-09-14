S = int(input())

dp = [0] * (S+1)

def rec(n):
    if dp[n] > 0:
        return dp[n]
    if n < 3:
        return dp[n]

    result = 1
    for i in range(n-3, 0, -1):
        result += rec(i)
    result %= 10 ** 9 + 7
    dp[n] = result
    return result

print(rec(S))
