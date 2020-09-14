X, Y = map(int, input().split())

flag1 = (Y - 2 * X >= 0) and ((Y - 2 * X) % 2 == 0)
flag2 = (4 * X - Y >= 0) and ((4 * X - Y) % 2 == 0)

print("Yes" if flag1 and flag2 else "No")
