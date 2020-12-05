N, X = map(int, input().split())
L = list(map(int, input().split()))

count = 1
dis = 0
for l in L:
    dis = dis + l
    if dis > X:
        break
    count += 1

print(count)
