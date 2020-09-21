def is_OK(s, digit_option):
    if len(s) != len(digit_option):
        return False

    for i, d in enumerate(digit_option):
        if int(s[i]) != list(d)[0]:
            return False

    return True

def main():
    N, M = map(int, input().split())

    digit_option = [ set([]) for i in range(N) ]
    for i in range(M):
        s, c = map(int, input().split())
        s -= 1
        digit_option[s].add(c)

    for i, d in enumerate(digit_option):
        if len(d) > 1:
            print(-1)
            return
        if len(d) == 0:
            d.add(0)

    # 全列挙
    for i in range(10 ** N):
        if is_OK(str(i), digit_option):
            print(i)
            return

    print(-1)

main()
