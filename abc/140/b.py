N = int(input())
A = list(map(int, input().split()))
A = list(map(lambda x: x-1, A))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

prev_meal = A[0]
res = B[prev_meal]
for i in range(1, N):
    cur_meal = A[i]
    res += B[cur_meal]
    if cur_meal - prev_meal == 1:
        res += C[prev_meal]
    prev_meal = cur_meal

print(res)
