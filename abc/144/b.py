def main():
    N = int(input())

    for n in range(1, 10):
        for m in range(1, 10):
            if n * m == N:
                print("Yes")
                return
    print("No")

main()
