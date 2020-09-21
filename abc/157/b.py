def main():
    A_checked = [ [False] * 3 for i in range(3) ]
    A_map = {}

    for i in range(3):
        A = list(map(int, input().split()))
        A_map[A[0]] = (i, 0)
        A_map[A[1]] = (i, 1)
        A_map[A[2]] = (i, 2)

    N = int(input())
    for i in range(N):
        b = int(input())
        if b in A_map:
            v = A_map[b]
            A_checked[v[0]][v[1]] = True

    if A_checked[0][0] and A_checked[0][1] and A_checked[0][2]:
        print("Yes")
        return
    if A_checked[1][0] and A_checked[1][1] and A_checked[1][2]:
        print("Yes")
        return
    if A_checked[2][0] and A_checked[2][1] and A_checked[2][2]:
        print("Yes")
        return

    if A_checked[0][0] and A_checked[1][0] and A_checked[2][0]:
        print("Yes")
        return
    if A_checked[0][1] and A_checked[1][1] and A_checked[2][1]:
        print("Yes")
        return
    if A_checked[0][2] and A_checked[1][2] and A_checked[2][2]:
        print("Yes")
        return

    if A_checked[0][0] and A_checked[1][1] and A_checked[2][2]:
        print("Yes")
        return
    if A_checked[0][2] and A_checked[1][1] and A_checked[2][0]:
        print("Yes")
        return

    print("No")

main()
