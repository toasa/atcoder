def main():
    N = int(input())
    A = list(map(int, input().split()))

    registered = {}

    for a in A:
        if a in registered:
            print("NO")
            return
        registered[a] = True

    print("YES")

main()
