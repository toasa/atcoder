def main():
    S = input()
    T = input()

    if len(S)+1 != len(T):
        print("No")
        return

    if S != T[:-1]:
        print("No")
        return

    print("Yes")

main()
