N = int(input())
A = list(map(int, input().split()))

ones_count = [0] * 60
for i in range(60):
    for a in A:
        b_on = (a & (1 << i)) == (1 << i)
        if b_on:
            ones_count[i] += 1

MOD = 10 ** 9 + 7
res = 0
for i in range(60):
    ones = ones_count[i]
    zeros = N - ones
    res += (2 ** i) * (ones * zeros)
    res %= MOD

print(res)

