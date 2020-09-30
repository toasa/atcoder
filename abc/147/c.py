from itertools import chain,combinations

def powerset(iterable):
    s = list(iterable)
    m = chain.from_iterable(combinations(s, r) for r in range(len(s)+1))
    return list(m)

N = int(input())

people = [ i for i in range(N) ]

honest_sets = [ set() for i in range(N) ]
unkind_sets = [ set() for i in range(N) ]
for i in range(N):
    A = int(input())
    for j in range(A):
        x, y = map(int, input().split())
        x -= 1
        if y == 1:
            honest_sets[i].add(x)
        else:
            unkind_sets[i].add(x)

res = 0
pows = powerset(people)
for cur_honests in pows:
    cur_honests = set(cur_honests)
    cur_unkinds = set(people) - cur_honests

    modify_flag = True
    for man in cur_honests:
        honests = honest_sets[man]
        unkinds = unkind_sets[man]

        if not honests <= cur_honests:
            modify_flag = False
            break
        if not unkinds <= cur_unkinds:
            modify_flag = False
            break

    if modify_flag:
        res = len(cur_honests)

print(res)

