N, X = map(int, input().split())
L = list(map(int, input().split()))

bound = [0] * (X+1)

d = 0
for i in range(N):
    if d <= X:
        bound[d] += 1
    d += L[i]

print(sum(bound))
