N, S = input().split()
N = int(N)

A_count = [0] * (N + 1)
T_count = [0] * (N + 1)
C_count = [0] * (N + 1)
G_count = [0] * (N + 1)

for i, c in enumerate(S):
    A_count[i+1] = A_count[i]
    T_count[i+1] = T_count[i]
    C_count[i+1] = C_count[i]
    G_count[i+1] = G_count[i]

    if c == 'A':
        A_count[i+1] += 1
    elif c == 'T':
        T_count[i+1] += 1
    elif c == 'C':
        C_count[i+1] += 1
    else:
        G_count[i+1] += 1

res = 0
for left in range(N):
    for right in range(left+1, N+1):
        a = A_count[right] - A_count[left]
        t = T_count[right] - T_count[left]
        c = C_count[right] - C_count[left]
        g = G_count[right] - G_count[left]
        if (a == t) and (c == g):
            res += 1

print(res)
