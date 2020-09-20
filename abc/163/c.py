N = int(input())
A = list(map(int, input().split()))
A = list(map(lambda x: x - 1, A))

bukas = [ [] for i in range(N) ]
for i in range(1, N):
    bukas[A[i-1]].append(i)

for b in bukas:
    print(len(b))
