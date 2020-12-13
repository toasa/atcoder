def main():
    N, M, T = map(int, input().split())
    orgN = N
    A = [0] * (M+1)
    B = [0] * (M+1)

    for i in range(1, M+1):
        a, b = map(int, input().split())
        A[i], B[i] = a, b

    for i in range(1, M+1):
        # use
        N = max(N-(A[i]-B[i-1]), 0)

        if N == 0:
            print("No")
            return

        # charge
        N = min(orgN, N + (B[i]-A[i]))

    print("Yes" if N - (T-B[M]) > 0 else "No")

main()
