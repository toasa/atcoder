from collections import deque

def manhattan(p):
    return p[0] + p[1]

X, Y = map(int, input().split())
goal = (X, Y)

queue = deque((0, 0))

size_max = 10 ** 6 + 1000
count_mat = [ [0] * size_max for _ in range(size_max) ]

while len(queue) > 0:
    p = queue.popleft()
    if manhattan(p) > manhattan(goal):
        break

    next_move1 = (p[0]+1, p[1]+2)
    next_move2 = (p[0]+2, p[1]+1)

    count_mat[next_move1[0]][next_move1[1]] += 1
    count_mat[next_move2[0]][next_move2[1]] += 1

    queue.append(next_move1)
    queue.append(next_move2)

print(count_mat[X][Y])
