def main():
    S = input()
    for i, c in enumerate(S):
        if i % 2 == 0:
            if c == "L":
                print("No")
                return
        else:
            if c == "R":
                print("No")
                return
    print("Yes")

main()

