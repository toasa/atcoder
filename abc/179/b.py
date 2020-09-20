N = int(input())

zoro_count = 0
OK = False

for i in range(N):
    d1, d2 = map(int, input().split())
    if d1 == d2:
        zoro_count += 1
        if zoro_count >= 3:
            OK = True
    else:
        zoro_count = 0

print("Yes" if OK else "No")
