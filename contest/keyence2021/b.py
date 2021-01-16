N, K = map(int, input().split())
A = list(map(int, input().split()))

A.sort()

ball_count = [0] * N
i = 0
while i < N:
    cur_val = A[i]
    i += 1
    count = 1

    while (i < N) and (A[i] == cur_val):
        i += 1
        count += 1

    ball_count[cur_val] = count

print(ball_count)
    

