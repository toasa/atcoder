class UFNode:
    def __init__(self, ID):
        self.ID = ID
        self.parent = None

class UFTree:
    def __init__(self, N):
        self.N = N
        self.nodes = [ UFNode(i) for i in range(N) ]

    def get_root(self, node):
        if node.parent is None:
            return node
        root = self.get_root(node.parent)
        node.parent = root
        return root

    def same(self, node1, node2):
        root1 = self.get_root(node1)
        root2 = self.get_root(node2)
        return root1.ID == root2.ID

    def merge(self, node1, node2):
        root1 = self.get_root(node1)
        root2 = self.get_root(node2)

        if root1.ID == root2.ID:
            return

        root1.parent = root2
        

def main():
    N, M, K = map(int, input().split())

    friend_map = [ [False] * N for i in range(N) ]
    block_map = [ [False] * N for i in range(N) ]

    tree = UFTree(N)

    for i in range(M):
        a, b = map(int, input().split())
        a, b = a - 1, b - 1
        friend_map[a][b] = True
        friend_map[b][a] = True
        tree.merge(tree.nodes[a], tree.nodes[b])

    for i in range(K):
        a, b = map(int, input().split())
        a, b = a - 1, b - 1
        block_map[a][b] = True
        block_map[b][a] = True

main()
