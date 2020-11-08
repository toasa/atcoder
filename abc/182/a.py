A, B = map(int, input().split())

follow_limit = 2 * A + 100
if B < follow_limit:
    print(follow_limit-B)
else:
    print(0)
