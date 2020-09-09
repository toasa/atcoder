class DFS:
    def __init__(self, H, W, C, first_posion, goal):
        self.H = H
        self.W = W
        self.C = C
        self.goal = goal
        self.visited = [[False] * W for i in range(H)]
        self.visited[first_posion[0]][first_posion[1]] = True
        self.stack = [first_posion]

    def can_reach(self):
        while (len(self.stack) > 0):
            p = self.stack.pop()
            if p == self.goal:
                return True

            up = (p[0]-1, p[1])
            down = (p[0]+1, p[1])
            left = (p[0], p[1]-1)
            right = (p[0], p[1]+1)

            next_moves = list(filter(self.is_legal_move, [up, down, left, right]))
            for move in next_moves:
                if not self.visited[move[0]][move[1]]:
                    self.visited[move[0]][move[1]] = True
                    self.stack.append(move)

        return False

    def is_legal_move(self, move):
        h = move[0]
        w = move[1]
        if h < 0 or h >= self.H or w < 0 or w >= self.W:
            return False

        return self.C[h][w] != "#"

H, W = map(int, input().split())
C = [[None] * W for i in range(H)]

C_line_list = [ list(input()) for i in range(H) ]

# input data
for i, C_line in enumerate(C_line_list):
    for j, c in enumerate(C_line):
        C[i][j] = c
        if c == "s":
            first_posion = (i, j)
        elif c == "g":
            goal = (i, j)

dfs = DFS(H, W, C, first_posion, goal)
print("Yes" if dfs.can_reach() else "No")
