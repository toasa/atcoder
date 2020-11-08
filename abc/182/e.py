from collections import deque

def legal_position(pos):
    h = pos[0]
    w = pos[1]
    if h < 0 or h >= H:
        return False
    if w < 0 or w >= W:
        return False
    return board[h][w] != BLOCK

H, W, N, M = map(int, input().split())

board = [[0] * W for _ in range(H)]
BULB = 1
BLOCK = 2
bulb_que = deque()

for i in range(N):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    board[a][b] = BULB
    bulb_que.append((a, b))

for i in range(M):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    board[a][b] = BLOCK

while len(bulb_que) > 0:
    bulb = bulb_que.popleft()
    
    # up
    i = 1
    while True:
        h = bulb[0]-i
        w = bulb[1]
        if legal_position((h, w)):
            board[h][w] = BULB
            i += 1
        else:
            break

    # down
    i = 1
    while True:
        h = bulb[0]+i
        w = bulb[1]
        if legal_position((h, w)):
            board[h][w] = BULB
            i += 1
        else:
            break

    # left
    i = 1
    while True:
        h = bulb[0]
        w = bulb[1]-i
        if legal_position((h, w)):
            board[h][w] = BULB
            i += 1
        else:
            break

    # right
    i = 1
    while True:
        h = bulb[0]
        w = bulb[1]+i
        if legal_position((h, w)):
            board[h][w] = BULB
            i += 1
        else:
            break

res = 0
for h in range(H):
    for w in range(W):
        if board[h][w] == BULB:
            res += 1
print(res)
