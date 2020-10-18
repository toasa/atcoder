def main():
    X, Y, A, B = map(int, input().split())
    exp = 0

    while A*X <= B+X and A*X < Y:
        X *= A
        exp += 1

    print(exp + (Y - 1 - X) // B)

main()
