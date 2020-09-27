N, Q = map(int, input().split())

S = "1" * N
mod = 998244353

L, R, D = [0]*Q, [0]*Q, [0]*Q
for i in range(Q):
    l, r, d = map(int, input().split())
    l, r = l-1, r-1
    L[i], R[i], D[i] = l, r, d

for i, d in enumerate(D):
    l, r = L[i], R[i]
    head = S[:l]
    tail = S[r+1:]
    S = head + str(d) * (r - l + 1) + tail
    print(int(S) % mod)

