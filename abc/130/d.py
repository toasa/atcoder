N, K = map(int, input().split())
A = list(map(int, input().split()))

right = 0
left = 0

cur_sum = 0
res = 0

while left < N:
    while right < N and A[right] + cur_sum >= K:
        cur_sum += A[right]
        right += 1

    res += right - left

    if right == left:
        right += 1
    else:
        cur_sum -= A[left]

    left += 1

print(res)
