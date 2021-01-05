def S(num):
    return int(num[0]) + int(num[1]) + int(num[2])


A, B = input().split()
SA, SB = S(A), S(B)
if SA >= SB:
    print(SA)
else:
    print(SB)


