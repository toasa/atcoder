def main():
    N = int(input())
    A = list(map(int, input().split()))
    for a in A:
        if a == 0:
            print(0)
            return

    mul = 1
    for a in A:
        mul *= a
        if mul > 10 ** 18:
            print(-1)
            return

    print(mul)

main()
