A, B = map(int, input().split())

valid_num = lambda x: 1 <= x <= 9

if valid_num(A) and valid_num(B):
    print(A * B)
else:
    print(-1)
