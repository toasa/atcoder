H, W, A, B = map(int, input().split())

filled = [[False]*W for _ in range(H)]

def all_filled():
    for i in range(H):
        for j in range(W):
            if not filled[i][j]:
                return False
    return True

count = 0

def back_track(row, col, curA, curB):
    global count
    if col >= W:
        col = 0
        row += 1

    if row >= H:
        # curA, curB = A, B
        if all_filled():
            count += 1
            return

    if filled[row][col]:
        return back_track(row, col+1, curA, curB)

    if curA > 0:
        # 横向きに置く
        if col < W-1 and (not filled[row][col+1]):
            filled[row][col], filled[row][col+1] = True, True
            back_track(row, col+1, curA-1, curB)
            filled[row][col], filled[row][col+1] = False, False

    if curA > 0:
        # 縦向きに置く
        if row < H-1 and (not filled[row+1][col]):
            filled[row][col], filled[row+1][col] = True, True
            back_track(row, col+1, curA-1, curB)
            filled[row][col], filled[row+1][col] = False, False

    if curB > 0:
        filled[row][col] = True
        back_track(row, col+1, curA, curB-1)
        filled[row][col] = False

back_track(0, 0, A, B)
print(count)
