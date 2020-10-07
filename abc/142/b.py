N, K = map(int, input().split())
H = list(map(int, input().split()))

res = 0
for h in H:
    if h >= K:
        res += 1

print(res)
