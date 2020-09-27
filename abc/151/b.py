def main():
    N, K, M = map(int, input().split())
    A = list(map(int, input().split()))

    if K + sum(A) >= M * N:
        for i in range(K+1):
            if i + sum(A) >= M * N:
                print(i)
                return
    else:
        print(-1)

main()
