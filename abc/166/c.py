import bisect

class Peaks:
    def __init__(self, N, H, next_obs_heights):
        self.N = N
        self.H = H
        self.next_obs_heights = next_obs_heights

    def solve(self):
        result = 0

        for i in range(N):
            if len(next_obs_heights[i]) == 0:
                result += 1
                continue

            next_num = len(next_obs_heights[i])
            if self.H[i] > next_obs_heights[i][next_num-1]:
                result += 1

        print(result)

N, M = map(int, input().split())
H = list(map(int, input().split()))
next_obs_heights = [ [] for i in range(N) ]
for i in range(M):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    bisect.insort(next_obs_heights[a], H[b])
    bisect.insort(next_obs_heights[b], H[a])

peaks = Peaks(N, H, next_obs_heights)
peaks.solve()
