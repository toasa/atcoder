N = int(input())
T, L, R = [0]*N, [0]*N, [0]*N

for i in range(N):
    T[i], L[i], R[i] = map(int, input().split())

count = 0
for i in range(N-1):
    for j in range(i+1, N):
        t1, l1, r1 = T[i], L[i], R[i]
        t2, l2, r2 = T[j], L[j], R[j]

        if l2 < l1:
            t1, t2 = t2, t1
            l1, l2 = l2, l1
            r1, r2 = r2, r1

        # 以下では l1 <= l2 であることが確定
        if l2 < r1:
            count += 1
            continue
        elif l2 == r1 and ((t1==1 and t2==1) or (t1==1 and t2==2) or (t1==3 and t2==1) or (t1==3 and t2==2)):
            count += 1
            continue

print(count)

