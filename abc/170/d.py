import copy

def main():
    N = int(input())
    A = list(map(int, input().split()))
    A.sort()
    A_max = A[N-1]

    div_count = [0] * (A_max + 1)

    for a in A:
        for n in range(a, A_max+1, a):
            div_count[n] += 1

    exists = [False] * (A_max + 1)
    for a in A:
        exists[a] = True

    result = 0
    for i, d in enumerate(div_count):
        if d == 1 and exists[i]:
            result += 1

    print(result)

main()
