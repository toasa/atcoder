from collections import deque

H, W = map(int, input().split())
A = [""] * H
visited = [ [False] * W for _ in range(H) ]
cost = [ [-1] * W for _ in range(H) ]

char_list = [ [] for _ in range(26) ]

for i in range(H):
    A[i] = input()

for i in range(H):
    for j in range(W):
        if A[i][j] == 'S':
            start = (i, j)
        elif A[i][j] == 'G':
            goal = (i, j)
        elif ord('a') <= ord(A[i][j]) <= ord('z'):
            n = ord(A[i][j]) - ord('a')
            char_list[n].append( (i,j) )

cost[start[0]][start[1]] = 0
visited[start[0]][start[1]] = True
q = deque()
q.append(start)

while len(q) > 0:
    move = q.popleft()
    if visited[move[0]][move[1]]:
        continue

    cur_cost = cost[move[0]][move[1]]

    if ord('a') <= ord(A[move[0]][move[1]]) <= ord('z'):
        if not visited[move[0]][move[1]]:
            n = ord(A[move[0]][move[1]]) - ord('a')
            for m in char_list[n]:
                if not visited[m[0]][m[1]]:
                    visited[m[0]][m[1]] = True
                    cost[m[0]][m[1]] = cur_cost+1
                    q.append(m)

    move_deltas = [(-1, 0), (0, -1), (0, 1), (1, 0)]
    for delta in move_deltas:
        h = move[0] + delta[0]
        w = move[1] + delta[1]

        if h < 0 or w < 0 or h >= H or w >= W:
            continue

        if A[h][w] == '#':
            continue

        if not visited[move[0]][move[1]]:
            q.append((h,w))
            visited[h][w] = True
            cost[h][w] = cur_cost+1

if visited[goal[0]][goal[1]]:
    print(cost[goal[0]][goal[1]])
else:
    print(-1)
