from collections import deque

H, W = map(int, input().split())
A = [""] * H
visited = [ [False] * W for _ in range(H) ]
cost = [ [10**7] * W for _ in range(H) ]

char_dic = {}
for i in range(ord('a'), ord('z')+1):
    char_dic[chr(i)] = []

for i in range(H):
    A[i] = input()

for i in range(H):
    for j in range(W):
        if A[i][j] == 'S':
            start = (i, j)
        elif A[i][j] == 'G':
            goal = (i, j)
        elif ord('a') <= ord(A[i][j]) <= ord('z'):
            char_dic[A[i][j]].append( (i,j) )

cost[start[0]][start[1]] = 0
visited[start[0]][start[1]] = True
q = deque()
q.append(start)

while len(q) > 0:
    move = q.popleft()
    cur_cost = cost[move[0]][move[1]]

    if ord('a') <= ord(A[move[0]][move[1]]) <= ord('z'):
        c = A[move[0]][move[1]]
        l = char_dic[c]
        if len(l) > 0:
            m = l.pop()
            if cur_cost+1 <= cost[m[0]][m[1]]:
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

        if cur_cost+1 <= cost[h][w]:
            q.append((h,w))
            visited[h][w] = True
            cost[h][w] = cur_cost+1

if visited[goal[0]][goal[1]]:
    print(cost[goal[0]][goal[1]])
else:
    print(-1)
