import itertools

N, K = map(int, input().split())
T = [[0] * N for _ in range(N) ]
for i in range(N):
    t = list(map(int, input().split()))
    T[i] = t

res = 0

total_perms = list(itertools.permutations(range(N-1)))
for perm in total_perms:
    perm = list(map(lambda x: x+1, perm))

    perm.insert(0, 0)
    perm.append(0)

    total_time = 0
    for i in range(N):
        s = perm[i]
        d = perm[i+1]
        total_time += T[s][d]

    if total_time == K:
        res += 1

print(res)
