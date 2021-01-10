X, Y = map(int, input().split())

if X > Y:
    X, Y = Y, X

print("Yes" if X + 3 > Y else "No")
