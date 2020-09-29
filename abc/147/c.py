from itertools import chain,combinations

def powerset(iterable):
    s = list(iterable)
    m = chain.from_iterable(combinations(s, r) for r in range(len(s)+1))
    return list(m)

N = int(input())

people = [ i for i in range(N) ]

honest_map = [ {} for i in range(N) ]
for i in range(N):
    A = int(input())
    for j in range(A):
        x, y = map(int, input().split())
        x -= 1
        if y == 0:
            honest_map[i][x] = True
        else:
            honest_map[i][x] = False

res = 0
pows = powerset(people)
for s in pows:
    for man in s:



