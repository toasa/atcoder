class UFTree:
    def __init__(self, N):
        self.parents = [-1] * N

    def get_root(self, i):
        if self.parents[i] < 0:
            return i
        self.parents[i] = self.get_root(self.parents[i])
        return self.parents[i]

    def same(self, i, j):
        return self.get_root(i) == self.get_root(j)

    def concat(self, i, j):
        ri = self.get_root(i)
        rj = self.get_root(j)

        if i == j:
            return

        self.parents[i] = rj

N, Q = map(int, input().split())
tree = UFTree(N)

PAB = []
for i in range(Q):
    l = list(map(int, input().split()))
    PAB.append(l)

for i in range(Q):
    P, A, B = PAB[i][0], PAB[i][1], PAB[i][2]
    if P == 0:
        tree.concat(A-1, B-1)
    else:
        print("Yes" if tree.same(A-1, B-1) else "No")

