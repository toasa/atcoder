def main():
    N, K = map(int, input().split())
    H = list(map(int, input().split()))

    if N <= K:
        print(0)
        return

    H = sorted(H)
    H = H[::-1]
    print(sum(H[K:]))

main()
