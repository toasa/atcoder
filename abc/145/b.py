def main():
    N = int(input())
    S = input()

    is_odd = lambda x: x % 2 == 1

    if is_odd(N):
        print("No")
        return

    first_half = S[:N//2]
    second_half = S[N//2:]

    print("Yes" if first_half == second_half else "No")

main()
