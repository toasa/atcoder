def get_expected_val(p):
    result = 0
    for i in range(1, p+1):
        result += (i / p)
    return result

N, K = map(int, input().split())
p = list(map(int, input().split()))

expects = [0] * 1001
for i in range(1, 1001):
    expects[i] = get_expected_val(i)

c_sum = [0] * (N + 1)
for i in range(1, N + 1):
    c_sum[i] = c_sum[i-1] + p[i-1]

m = -1
max_i = 0
for i in range(0, N - K + 1):
    l = i
    r = l + K - 1

    tmp = c_sum[r+1] - c_sum[l]

    if m < tmp:
        m = tmp
        max_i = i

result = 0
for i in range(max_i, max_i + K):
    result += expects[p[i]]

print(result)
