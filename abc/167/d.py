class Telepoter:
    def __init__(self, N, K, A):
        self.N = N
        self.K = K
        self.A = A
        self.path_start = 0
        self.loop_start = -1 # 未確定、find_path_and_loopで決める
        self.path_length = -1 # 未確定、find_path_and_loopで決める
        self.loop_length = -1 # 未確定、find_path_and_loopで決める

    def find_path_and_loop(self):
        visited = [False] * self.N
        visited[0] = True
        cur = self.A[0]

        while not visited[cur]:
            visited[cur] = True
            cur = self.A[cur]

        loop_start = cur
        self.loop_start = loop_start

        # get path length
        if loop_start == 0:
            path_length = 0
        else:
            path_length = 1
            cur = self.A[0]
            while cur != loop_start:
                path_length += 1
                cur = self.A[cur]
        self.path_length = path_length

        # get loop length
        loop_length = 1
        cur = self.A[loop_start]
        while cur != loop_start:
            loop_length += 1
            cur = self.A[cur]
        self.loop_length = loop_length

    def solve(self):
        self.find_path_and_loop()

        if self.K <= self.path_length:
            cur = 0
            for i in range(K):
                cur = self.A[cur]
            print(cur+1)
            return

        self.K -= self.path_length
        self.K %= self.loop_length
        cur = self.loop_start
        for i in range(self.K):
            cur = self.A[cur]
        print(cur+1)

N, K = map(int, input().split())
A = list(map(int, input().split()))
A = list(map(lambda x: x-1, A))

t = Telepoter(N, K, A)
t.solve()
