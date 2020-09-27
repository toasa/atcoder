N, M = map(int, input().split())

accepts = [False] * N
WA_count = [0] * N
penals = 0

for i in range(M):
    p, S = input().split()
    p = int(p) - 1
    if S == "AC":
        if accepts[p]:
            pass
        else:
            penals += WA_count[p]
            accepts[p] = True
    else:
        WA_count[p] += 1

accept_count = 0
for a in accepts:
    if a:
        accept_count += 1

print(accept_count, penals)
