class UFTree:
    def __init__(self, N):
        self.nodes = [Node(i) for i in range(N)]
        self.N = N

class Node:
    def __init__(self, ID):
        self.ID = ID
        self.parent = None

    def get_root(self):
        if self.parent is None:
            return self

        # 経路圧縮
        r = self.parent.get_root()
        self.parent = r
        return r

    def same(self, another):
        return self.get_root().ID == another.get_root().ID

    def concat(self, another):
        root_1 = self.get_root()
        root_2 = another.get_root()

        if root_1.same(root_2):
            return

        root_1.parent = root_2

N, Q = map(int, input().split())
tree = UFTree(N)

PAB = []
for i in range(Q):
    l = list(map(int, input().split()))
    PAB.append(l)

for i in range(Q):
    P, A, B = PAB[i][0], PAB[i][1], PAB[i][2]

    n1 = tree.nodes[A-1]
    n2 = tree.nodes[B-1]
    if P == 0:
        n1.concat(n2)
    else:
        print("Yes" if n1.same(n2) else "No")

