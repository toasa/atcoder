class UFTree:
    def __init__(self, N):
        self.nodes = [Node(i) for i in range(N)]
        self.N = N

    def find_max_child_num(self):
        result = 0
        for i in range(self.N):
            result = max(result, self.nodes[i].child_num)
        return result

class Node:
    def __init__(self, ID):
        self.ID = ID
        self.parent = None
        self.child_num = 0
        self.rank = 1

    def get_root(self):
        if self.parent is None:
            return self
        
        return self.parent.get_root()

    def is_in_same_tree(self, another):
        return self.get_root().ID == another.get_root().ID

    def concat(self, another):
        if self.is_in_same_tree(another):
            return

        sr = self.get_root()
        ar = another.get_root()

        if sr.rank > ar.rank:
            parent, child = sr, ar
        else:
            parent, child = ar, sr

        parent.child_num += child.child_num + 1
        parent.rank = max(parent.rank, child.rank + 1)
        child.parent = parent

N, M = map(int, input().split())
tree = UFTree(N)

AB = []
for i in range(M):
    l = list(map(int, input().split()))
    AB.append(l)

for i in range(M):
    a, b = AB[i][0], AB[i][1]
    a -= 1;
    b -= 1;

    tree.nodes[a].concat(tree.nodes[b])

# # for debug
# for i in range(N):
#     n = tree.nodes[i]
#     if n.parent is None:
#         print(i + 1, "is root")
#     else:
#         print("parent of", i + 1, "is", n.parent.ID + 1)

print(tree.find_max_child_num() + 1)
