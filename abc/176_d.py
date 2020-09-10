from collections import deque

class BFS:
    def __init__(self, H, W, S, C, D):
        self.H = H
        self.W = W
        self.S = S
        # 魔法使いの場所
        self.C = C
        # 目的地
        self.D = D

        # 盤面上のセルの状態
        # -1: 未到達
        # 0 : 魔法0回で到達
        # 1 : 魔法1回で到達
        # 2 : 魔法2回で到達, and so on...
        self.board_states = [[-1] * W for i in range(H)]
        self.board_states[C[0]][C[1]] = 0
        self.queue = deque([C])
        self.remain_cells = [C]

    def is_legal_move(self, move):
        h = move[0]
        w = move[1]

        if h < 0 or h >= self.H or w < 0 or w >= self.W:
            return False
        return self.S[h][w] == "."

    def is_not_visited(self, move):
        h = move[0]
        w = move[1]
        return self.board_states[h][w] == -1

    def walk(self):
        next_queue = deque([])
        while len(self.queue) > 0:
            if len(self.queue) == 0 and len(next_queue) > 0:
                self.queue = next_queue

            move = self.queue.popleft()

            up = (move[0]-1, move[1])
            down = (move[0]+1, move[1])
            left = (move[0], move[1]-1)
            right = (move[0], move[1]+1)

            next_moves = list(filter(self.is_legal_move, [up, down, left, right]))

            for next_move in next_moves:
                if self.is_not_visited(next_move):
                    self.queue.append(next_move)
                    self.remain_cells.append(next_move)
                    self.set_boart_states(next_move, self.get_boart_states(move))

    def set_boart_states(self, move, value):
        self.board_states[move[0]][move[1]] = value

    def get_boart_states(self, move):
        return self.board_states[move[0]][move[1]]

    def print_board_states(self):
        for l in self.board_states:
            print(l)

H, W = map(int, input().split())
C_h, C_w = map(int, input().split())
C_h -= 1
C_w -= 1
D_h, D_w = map(int, input().split())
D_h -= 1
D_w -= 1

S = [ [None] * W for i in range(H) ]
for i in range(H):
    l = input()
    for j, s in enumerate(l):
        S[i][j] = s

bfs = BFS(H, W, S, (C_h, C_w), (D_h, D_w))

while (True):
    bfs.walk()
    if len(bfs.remain_cells) == 0:
        break
    
    while len(bfs.remain_cells) > 0:
        move = bfs.remain_cells.pop()
        for i in range(-2, 3):
            for j in range(-2, 3):
                next_move = (move[0]+i, move[1]+j)
                if not bfs.is_legal_move(next_move):
                    continue

                if bfs.is_not_visited(next_move):
                    bfs.queue.append(next_move)
                    bfs.set_boart_states(next_move, bfs.get_boart_states(move) + 1)
                elif (not bfs.is_not_visited(next_move)) and bfs.get_boart_states(next_move) > bfs.get_boart_states(move) + 1:
                    bfs.queue.append(next_move)
                    bfs.set_boart_states(next_move, bfs.get_boart_states(move) + 1)

print(bfs.get_boart_states((D_h, D_w)))

