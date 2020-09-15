def main():
    A, B, C, K = map(int, input().split())

    result = A if K >= A else K
    K -= A
    if K <= 0:
        print(result)
        return

    K -= B
    if K <= 0:
        print(result)
        return

    result -= K
    print(result)

main()
