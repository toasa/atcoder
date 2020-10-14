H, W = map(int, input().split())

S = []
for _ in range(H):
    s = input()
    S.append(s)

res = 0
for h, S_i in enumerate(S):
    for w, s in enumerate(S_i):
        if s == '#':
            continue
        if h != H - 1:
            if s == S[h+1][w]:
                res += 1
        if w != W - 1:
            if s == S[h][w+1]:
                res += 1

print(res)

