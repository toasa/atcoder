H, W, X, Y = map(int, input().split())
S = []
for i in range(H):
    s = input()
    S.append(s)

X, Y = X-1, Y-1

count = 1

i = 1
while (X-i>=0):
    if S[X-i][Y] == ".":
        count += 1
        i += 1
    else:
        break

i = 1
while (X+i<H):
    if S[X+i][Y] == ".":
        count += 1
        i += 1
    else:
        break

i = 1
while (Y-i>=0):
    if S[X][Y-i] == ".":
        count += 1
        i += 1
    else:
        break

i = 1
while (Y+i<W):
    if S[X][Y+i] == ".":
        count += 1
        i += 1
    else:
        break

print(count)
