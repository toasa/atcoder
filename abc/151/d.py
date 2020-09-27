from collections import deque

class Maze:
    def __init__(self, H, W, S):
        self.H = H
        self.W = W
        self.S = S
        self.start = (0, 0)
        self.visited = [ [False] * W for i in range(H) ]
        self.steps = [ [-1] * W for i in range(H) ]
        self.queue = deque()

    def BFS(self):
        self.visited = [ [False] * self.W for i in range(self.H) ]
        self.steps = [ [-1] * self.W for i in range(self.H) ]
        self.queue = deque()

        s_h, s_w = self.start[0], self.start[1]
        self.visited[s_h][s_w] = True
        self.steps[s_h][s_w] = 0
        self.queue.append((s_h, s_w))

        res = 0

        while len(self.queue) > 0:
            move = self.queue.popleft()

            up = (move[0]-1, move[1])
            down = (move[0]+1, move[1])
            left = (move[0], move[1]-1)
            right = (move[0], move[1]+1)
            
            next_moves = list(filter(self.is_legal_move, [up, down, left, right]))
            next_step = self.steps[move[0]][move[1]] + 1

            for m in next_moves:
                if self.visited[m[0]][m[1]]:
                    continue

                res = max(next_step, res)
                self.visited[m[0]][m[1]] = True
                self.steps[m[0]][m[1]] = next_step
                self.queue.append(m)

        return res

    def is_legal_move(self, move):
        if move[0] < 0 or move[0] >= self.H or move[1] < 0 or move[1] >= self.W:
            return False
        return self.S[move[0]][move[1]] == "."

def main():
    H, W = map(int, input().split())
    S = [ [0] * W for i in range(H) ]
    for i in range(H):
        S_line = input()
        for j, s in enumerate(S_line):
            S[i][j] = s

    maze = Maze(H, W, S)
    res = 0

    for s_h in range(H):
        for s_w in range(W):
            if S[s_h][s_w] == "#":
                continue
            maze.start = (s_h, s_w)
            res = max(res, maze.BFS())

    print(res)

main()
