def main():
    N, K = map(int, input().split())
    S = []

    zero_exists = False
    for i in range(N):
        s = int(input())
        if s == 0:
            zero_exists = True
        S.append(s)

    if zero_exists:
        print(N)
        return

    right = 0
    tmp_mul = 1
    res = 0

    for left in range(N):
        while (right < N) and (tmp_mul * S[right] <= K):
            tmp_mul *= S[right]
            right += 1

        res = max(res, right - left)


        if left == right:
            right += 1
        else:
            tmp_mul //= S[left]

    print(res)

main()
