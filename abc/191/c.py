H, W = map(int, input().split())
S = [""] * H
for i in range(H):
    S[i] = input()

min_max_widths = []
for i in range(H):
    w = 0
    while S[i][w] == ".":
        w += 1

    if w == W - 1:





