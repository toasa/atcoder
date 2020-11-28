N = int(input())
dis_mat = [ [0] * N for _ in range(N) ]
adj_list = [ list() for _ in range(N) ]
visited = [False] * N
# False: 白, True: 黒
color = [False] * N

for _ in range(N - 1):
    u, v, w = map(int, input().split())
    u, v = u-1, v-1
    dis_mat[u][v] = w
    adj_list[u].append(v)


def dfs(node):
    adjs = adj_list[node]
    for adj in adjs:
        if visited[adj]:
            continue
        visited[adj] = True
        if dis_mat[node][adj] % 2 == 0:
            color[adj] = color[node]
        else:
            color[adj] = not color[node]
        dfs(adj)

def main():
    visited[0] = True
    dfs(0)
    for c in color:
        print("1" if c else "0")

main()

