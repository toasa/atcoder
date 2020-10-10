def main():
    A, B = map(int, input().split())

    if B == 1:
        print(0)
        return

    res = 0
    kuchi = 0
    while True:
        if kuchi + A >= B:
            res += 1
            break

        kuchi += (A-1)
        res += 1

    print(res)

main()
