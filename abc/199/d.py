class Node:
    def __init__(self, ID):
        self.ID = ID
        self.color = None
        self.adjs = []
        self.is_checked = False

N, M = map(int, input().split())
nodes = [Node(i) for i in range(N)]

for i in range(M):
    A, B = map(int, input().split())
    A, B = A-1, B-1
    nodeA = nodes[A]
    nodeB = nodes[B]
    nodeA.adjs.append(nodeB)
    nodeB.adjs.append(nodeA)

for i in range(N):

