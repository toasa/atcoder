def change_char(s, c, idx):
    return s[:idx] + c + s[idx+1:]

N = int(input())
S = input()
Q = int(input())
head_str = S[:N]
tail_str = S[N:]

for i in range(Q):
    T, A, B = map(int, input().split())

    if T == 1:
        A, B = A-1, B-1

        # A, B ともに前半
        if B < N:
            A_c = head_str[A]
            B_c = head_str[B]
            head_str = change_char(head_str, B_c, A)
            head_str = change_char(head_str, A_c, B)

        # A, B ともに後半
        elif N <= A:
            A_c = tail_str[A-N]
            B_c = tail_str[B-N]
            tail_str = change_char(tail_str, A_c, B-N)
            tail_str = change_char(tail_str, B_c, A-N)

        # A は前半、B は後半
        else:
            A_c = head_str[A]
            B_c = tail_str[B-N]
            head_str = change_char(head_str, B_c, A)
            tail_str = change_char(tail_str, A_c, B-N)

        continue

    head_str, tail_str = tail_str, head_str

print(head_str + tail_str)
