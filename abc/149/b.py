def main():
    A, B, K = map(int, input().split())

    if K <= A:
        print(A-K, B)
    elif A < K <= (A+B):
        print(0, B-(K-A))
    elif A+B < K:
        print(0, 0)

main()
