from functools import reduce
import itertools

N = int(input())
P = list(input().split())
Q = list(input().split())

l = [ str(i + 1) for i in range(N) ]
l = list(itertools.permutations(l))

concat = lambda s1, s2: s1 + s2
P_str = reduce(concat, P)
Q_str = reduce(concat, Q)

for i, n in enumerate(l):
    s = reduce(concat, n)
    if s == P_str:
        a = i + 1
    if s == Q_str:
        b = i + 1

print(abs(a - b))
