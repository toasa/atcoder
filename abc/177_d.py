N, M = map(int, input().split())

AB = []
for i in range(M):
    l = list(map(int, input().split()))
    AB.append(l)

adj_mat = [[False] * N for i in range(N)]
friends_list = [1] * N 

for i in range(M):
    a, b = AB[i][0], AB[i][1]
    a -= 1;
    b -= 1;

    if (not adj_mat[a][b]):
        friends_list[a] += 1
    if (not adj_mat[b][a]):
        friends_list[b] += 1

    adj_mat[a][b] = True
    adj_mat[b][a] = True

max_friends = 0
for f_num in friends_list:
    max_friends = max(f_num, max_friends)

print(max_friends)
