N = int(input())
l = []
for _ in range(N):
    x, y = map(int, input().split())
    l.append((x,y))

count = 0
for i in range(N-1):
    for j in range(i+1, N):
        p1 = l[i]
        p2 = l[j]
        a = p1[0]
        b = p1[1]
        c = p2[0]
        d = p2[1]

        # if a-c <= d-b <= c-a:
        if -1 <= ((d-b)/(c-a)) <= 1:
            count += 1

print(count)

