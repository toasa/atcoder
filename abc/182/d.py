N = int(input())
A = list(map(int, input().split()))

max_idou = []
tmp = 0
tmp_max = A[0]
for a in A:
    tmp += a
    if tmp > tmp_max:
        tmp_max = tmp
    max_idou.append(tmp_max)

cum_sum = [0] * N
cum_sum[0] = A[0]
for i in range(1, N):
    cum_sum[i] = cum_sum[i-1]+A[i]

total_step = [0] * N
total_step[0] = cum_sum[0]
for i in range(1, N):
    total_step[i] = total_step[i-1]+cum_sum[i]
total_step.insert(0, 0)

last = total_step[len(total_step)-1]
total_step = total_step[:-1]
res = 0
for i, ts in enumerate(total_step):
    m = max(ts, ts+max_idou[i])
    if m >= res:
        res = m

res = max(res, last)

print(res)
