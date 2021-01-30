def main():
    N, X = map(int, input().split())
    V, P = [0] * N, [0] * N

    for i in range(N):
        V[i], P[i] = map(int, input().split())

    curX = 0
    X *= 100
    for i in range(N):
        v, p = V[i], P[i]
        curX += v * p
        if curX > X:
            print(i + 1)
            return
            
    print(-1)

main()
