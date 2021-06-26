H, W = map(int, input().split())
A = []
for _ in range(H):
    a = input()
    A.append(a)

taka_win_map = [[0] * W for _ in range(H)]

taka_turn = True
for h in range(H):
    if h == 0:
        continue
    c = A[h][0]
    if taka_turn:
        taka_turn = False
        if c == '+':
            taka_win_map[h][0] = taka_win_map[h-1][0] + 1
        else:
            taka_win_map[h][0] = taka_win_map[h-1][0] - 1
    else:
        taka_turn = True
        if c == '+':
            taka_win_map[h][0] = taka_win_map[h-1][0] - 1
        else:
            taka_win_map[h][0] = taka_win_map[h-1][0] + 1

taka_turn = True
for w in range(W):
    if w == 0:
        continue
    c = A[0][w]
    if taka_turn:
        taka_turn = False
        if c == '+':
            taka_win_map[0][w] = taka_win_map[0][w-1] + 1
        else:
            taka_win_map[0][w] = taka_win_map[0][w-1] - 1
    else:
        taka_turn = True
        if c == '+':
            taka_win_map[0][w] = taka_win_map[0][w-1] - 1
        else:
            taka_win_map[0][w] = taka_win_map[0][w-1] + 1

for h in range(1, H):
    for w in range(1, W):

        taka_turn = (((h + w) % 2) != 0)
        c = A[h][w]
        if taka_turn:
            if c == '+':
                taka_win_map[h][w] = max(taka_win_map[h][w-1]+1, taka_win_map[h-1][w]+1)
            else:
                taka_win_map[h][w] = max(taka_win_map[h][w-1]-1, taka_win_map[h-1][w]-1)
        else:
            if c == '+':
                taka_win_map[h][w] = min(taka_win_map[h][w-1]-1, taka_win_map[h-1][w]-1)
            else:
                taka_win_map[h][w] = min(taka_win_map[h][w-1]+1, taka_win_map[h-1][w]+1)

if taka_win_map[H-1][W-1] > 0:
    print("Takahashi")
elif taka_win_map[H-1][W-1] < 0:
    print("Aoki")
else:
    print("Draw")


