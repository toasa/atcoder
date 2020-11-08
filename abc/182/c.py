from itertools import combinations

def main():
    N = input()
    digits = []
    for c in N:
        digits.append(int(c))

    max_d = -1
    for r in range(len(digits)+1):
        l = list(combinations(digits, r))
        for c in l:
            if len(c) >= 1 and sum(c) % 3 == 0:
                if len(c) >= max_d:
                    max_d = len(c)

    if max_d == -1:
        print(-1)
    else:
        print(len(N) - max_d)

main()
