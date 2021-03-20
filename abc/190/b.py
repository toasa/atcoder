def main():
    N, S, D = map(int, input().split())
    flag = False
    for i in range(N):
        X, Y = map(int, input().split())
        if X < S and Y > D:
            flag = True

    print("Yes" if flag else "No")

main()
