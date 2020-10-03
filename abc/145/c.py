import itertools
import math

def dis(p1, p2):
    return math.sqrt((p1[0] - p2[0])**2 + (p1[1] - p2[1])**2)

def get_path_length(path):
    res = 0
    for i in range(N-1):
        p1 = path[i]
        p2 = path[i+1]
        res += dis_mat[p1][p2]
    return res

def fac(n):
    if n == 1:
        return 1
    return n * fac(n - 1)

N = int(input())
towns = []

for _ in range(N):
    x, y = map(int, input().split())
    towns.append((x, y))

dis_mat = [ [0] * N for _ in range(N) ]
for i, t1 in enumerate(towns):
    for j, t2 in enumerate(towns):
        if i == j:
            continue
        d = dis(t1, t2)
        dis_mat[i][j] = d
        dis_mat[j][i] = d

res = 0
towns_i = [ i for i in range(N) ]
for path in itertools.permutations(towns_i):
    res += get_path_length(path)

print(res / fac(N))

