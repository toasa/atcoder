def main():
    A, B, C, D = map(int, input().split())

    if A <= C and C <= B:
        print("Yes")
        return

    if C <= A and A <= D:
        print("Yes")
        return

    print("No")

main()
