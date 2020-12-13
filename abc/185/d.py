def main():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    A = sorted(A)

    for i, a in enumerate(A):
        A[i] = a-1

    if M == 0:
        print(1)
        return

    if M == N:
        print(0)
        return

    min_white_len = 10**9+10
    if A[0] > 0:
        min_white_len = min(min_white_len, A[0])
    if A[M-1] < N-1:
        min_white_len = min(min_white_len, N-1-A[M-1])
    for m in range(M-1):
        wn = A[m+1]-A[m]-1
        if wn == 0:
            continue
        min_white_len = min(min_white_len, A[m+1]-A[m]-1)

    count = 0
    if A[0] > 0:
        if A[0] % min_white_len == 0:
            count += A[0] // min_white_len
        else:
            count += A[0] // min_white_len + 1
    if A[M-1] < N-1:
        wn = N-1-A[M-1]
        if wn % min_white_len == 0:
            count += wn // min_white_len
        else:
            count += wn // min_white_len + 1
    for m in range(M-1):
        wn = A[m+1]-A[m]-1
        if wn == 0:
            continue
        if wn % min_white_len == 0:
            count += wn // min_white_len
        else:
            count += wn // min_white_len + 1
    print(count)

main()
