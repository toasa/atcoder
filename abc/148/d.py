def main():
    N = int(input())
    A = list(map(int, input().split()))

    cur_i = -1
    cur_want_num = 1
    kaidan_a = []

    for i, a in enumerate(A):
        if a == cur_want_num:
            cur_i = i
            cur_want_num += 1
            kaidan_a.append(a)

    if cur_i == -1:
        print(-1)
    else:
        print(N - len(kaidan_a))

main()

