class Node:
    def __init__(self, ID):
        self.ID = ID
        self.adjs = set([])
        self.is_calculated = False
        self.value = 0

class Tree:
    def __init__(self, N, Q):
        self.N = N
        self.Q = Q
        nodes = [ Node(i) for i in range(N) ]

        for _ in range(N-1):
            a, b = map(int, input().split())
            a, b = a-1, b-1
            nodes[a].adjs.add(b)
            nodes[b].adjs.add(a)

        for _ in range(Q):
            p, x = map(int, input().split())
            p -= 1
            nodes[p].value += x

        self.nodes = nodes

    def walk(self, node, val):
        node.value += val
        node.is_calculated = True
        for adj in node.adjs:
            adj_node = self.nodes[adj]
            if not adj_node.is_calculated:
                self.walk(adj_node, node.value)

    def result(self):
        for i in range(self.N):
            if i == self.N - 1:
                print(self.nodes[i].value)
            else:
                s = str(self.nodes[i].value) + " "
                print(s, end="")

def main():
    N, Q = map(int, input().split())
    tree = Tree(N, Q)
    tree.walk(tree.nodes[0], 0)
    tree.result()

main()

