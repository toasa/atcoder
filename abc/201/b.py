N = int(input())

mounts = []
for i in range(N):
    s, t = input().split()
    mounts.append((int(t), s))

mounts.sort()
mt = mounts[N-2]
print(mt[1])


