from collections import deque
import bisect

def main():
    N = int(input())
    A, B = [], []
    adjs = [[] for _ in range(N) ]

    for i in range(N-1):
        a, b = map(int, input().split())
        a, b = a-1, b-1
        A.append(a)
        B.append(b)
        adjs[a].append(b)
        adjs[b].append(a)

    # ノード0 を格納
    queue = deque([0])
    visited = [ False for _ in range(N) ]
    visited[0] = True

    max_color = 0
    node_color = [0] * N
    res_mat = [ [0] * N for _ in range(N) ]

    while len(queue) > 0:
        n = queue.popleft()
        color = 1
        for adj in adjs[n]:
            if visited[adj]:
                continue

            visited[adj] = True
            queue.append(adj)
            
            if node_color[n] == color:
                color += 1

            node_color[adj] = color
            color += 1

            res_mat[n][adj] = color
            res_mat[adj][n] = color
            max_color = max(max_color, color)

    print(max_color-1)

    for i, a in enumerate(A):
        b = B[i]
        print(res_mat[a][b]-1)

main()

