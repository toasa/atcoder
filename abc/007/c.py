from collections import deque

class BFS:
    def __init__(self, H, W, S, G, C):
        self.H = H
        self.W = W
        self.S = S
        self.G = G
        self.C = C
        self.queue = deque([S])
        self.visited = [ [-1]*W for i in range(H) ]
        self.visited[S[0]][S[1]] = 0

    def search(self):
        while len(self.queue) > 0:
            move = self.queue.popleft()
            prev_step = self.visited[move[0]][move[1]]

            if move == self.G:
                return

            up = (move[0]-1, move[1])
            down = (move[0]+1, move[1])
            left = (move[0], move[1]-1)
            right = (move[0], move[1]+1)

            next_moves = filter(self.is_legal_move, [up, down, left, right])

            for next_move in next_moves:
                if not self.is_visited(next_move):
                    self.queue.append(next_move)
                    self.set_visited(next_move, prev_step+1)

    def set_visited(self, move, val):
        self.visited[move[0]][move[1]] = val

    def is_visited(self, move):
        return self.visited[move[0]][move[1]] != -1
    
    def is_legal_move(self, move):
        return self.C[move[0]][move[1]] == "."


H, W = map(int, input().split())
sx, sy = map(int, input().split())
S = (sx-1, sy-1)
gx, gy = map(int, input().split())
G = (gx-1, gy-1)

C = [ [None] * W for i in range(H) ]
for i in range(H):
    line = input()
    for j, c in enumerate(line):
        C[i][j] = c

bfs = BFS(H, W, S, G, C)
bfs.search()
print(bfs.visited[bfs.G[0]][bfs.G[1]])
