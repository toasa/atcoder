N = int(input())
P = list(map(int, input().split()))
B = [False] * (N+10)

cur_min = 0 
for p in P:
    B[p] = True
    for i in range(cur_min, 200002):
        if not B[i]:
            cur_min = i
            print(i)
            break


