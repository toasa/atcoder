def main():
    X, K, D = map(int, input().split())

    # Xは0以上と仮定する
    X = X if X >= 0 else -X

    if X - (K * D) >= 0:
        print(X - K * D)
        return

    # 以下は X < K * D
    K -= X // D
    X %= D

    if K % 2 == 0:
        print(X)
    else:
        print(min(abs(X+D), abs(X-D)))

main()

