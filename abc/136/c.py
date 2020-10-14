def main():
    N = int(input())
    H = list(map(int, input().split()))

    if N == 1:
        print("Yes")
        return
    
    cur = H[N-1]
    for i in range(N-2, -1, -1):
        prev = H[i]

        if prev <= cur:
            cur = prev
        elif prev - cur == 1:
            cur = prev - 1
        else:
            print("No")
            return

    print("Yes")

main()

