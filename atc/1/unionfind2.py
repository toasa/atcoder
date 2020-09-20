class UFNode:
    def __init__(self, ID):
        self.ID = ID
        self.parent = None

class UFTree:
    def __init__(self, N):
        self.N = N
        self.nodes = [ UFNode(i) for i in range(N) ]

    def get_root(self, n):
        if n.parent is None:
            return n

        root = self.get_root(n.parent)
        n.parent = root
        return root

    def merge(self, a, b):
        if a == b:
            return
        
        node_a = self.nodes[a]
        node_b = self.nodes[b]

        root_a = self.get_root(node_a)
        root_b = self.get_root(node_b)

        if root_a.ID == root_b.ID:
            return

        root_b.parent = root_a

    def same(self, a, b):
        root_a = self.get_root(self.nodes[a])
        root_b = self.get_root(self.nodes[b])

        return root_a.ID == root_b.ID

N, Q = map(int, input().split())
tree = UFTree(N)

P, A, B = [0] * Q, [0] * Q, [0] * Q
for i in range(Q):
    p, a, b = map(int, input().split())
    P[i], A[i], B[i] = p, a, b

for i in range(Q):
    p, a, b = P[i], A[i], B[i]
    if p == 0:
        tree.merge(a, b)
    elif p == 1:
        print("Yes" if tree.same(a, b) else "No")

