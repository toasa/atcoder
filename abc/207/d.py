import numpy as np

N = int(input())
A, B = [0]*N, [0]*N
C, D = [0]*N, [0]*N
for i in range(N):
    A[i], B[i] = map(float, input().split())
for i in range(N):
    C[i], D[i] = map(float, input().split())

match = False

for i in range(N):
    for j in range(N):
        a, b = A[i], B[i]
        c, d = C[j], D[j]

        xdiff = a-c
        ydiff = b-d

        movedC = list(map(lambda x: x + xdiff, C))
        movedD = list(map(lambda y: y + ydiff, D))

        for deg in range(1, 360):
            t = np.deg2rad(deg)
            R = np.array([[np.cos(t), -np.sin(t)], [np.sin(t),  np.cos(t)]])
            for k in range(N):
                rotated = np.dot(R, (movedC[k], movedD[k]))
                movedC[k] = rotated[0]
                movedD[k] = rotated[1]

            for k in range(N):
                if not movedC[k].is_integer() or movedD[k].is_integer():
                    continue

            movedC = list(map(int, movedC))
            movedD = list(map(int, movedD))

            points1 = set([tuple(x) for x in zip(A, B)])
            points2 = set([tuple(x) for x in zip(movedC, movedD)])

            if points1 == points2:
                match = True

print("Yes" if match else "No")
