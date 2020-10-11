def brew(v1, v2):
    return (v1 + v2) / 2

N = int(input())
V = list(map(int, input().split()))

V = sorted(V)
res = brew(V[0], V[1])

for i in range(2, N):
    v = V[i]
    res = brew(res, v)

print(res)

