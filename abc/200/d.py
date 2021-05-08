from itertools import chain,combinations
def powerset(l):
    return chain.from_iterable(combinations(l, r) for r in range(len(l)+1))

def partial_sum(A, idxs):
    s = 0
    for i in idxs:
        s += A[i]
    return s

def print_idx(idxs):
    idxs = list(map(lambda x:x+1, list(idxs)))
    print("{} ".format(len(idxs)), end="")
    print(*idxs)

def main():
    N = int(input())
    A = list(map(int, input().split()))

    mods = [None] * 200

    ts = powerset(list(range(N)))
    for t in ts:
        if len(t) == 0:
            continue
        n = partial_sum(A, list(t))
        n %= 200
        if mods[n] == None:
            mods[n] = t
        else:
            print("Yes")
            print_idx(mods[n])
            print_idx(t)
            return

    print("No")

main()
