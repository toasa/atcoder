def main():
    X, N = map(int, input().split())
    if N == 0:
        print(X)
        return

    P = list(map(int, input().split()))

    if not X in P:
        print(X)
        return
    
    for i in range(1, 10000):
        if not X-i in P:
            print(X-i)
            return
        if not X+i in P:
            print(X+i)
            return

main()

