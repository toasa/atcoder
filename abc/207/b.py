A, B, C, D = map(int, input().split())
mizu = A
aka = 0
min_count = None
for i in range(10 ** 5 + 10):
    if mizu <= aka * D:
        min_count = i
        break
    mizu += B
    aka += C

print(min_count if min_count != None else -1)
