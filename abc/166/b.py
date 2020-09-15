from collections import Counter

N, K = map(int, input().split())

has_sweet = [False] * N

for i in range(K):
    d = int(input())
    A = list(map(int, input().split()))
    for a in A:
        has_sweet[a-1] = True

c = Counter(has_sweet)
print(c[False])
