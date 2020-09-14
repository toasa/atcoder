class HandV:
    def __init__(self, H, W, K, C):
        self.H = H
        self.W = W
        self.K = K
        self.C = C
        self.H_bar = [False] * H
        self.W_bar = [False] * W
        self.result = 0

    def solve(self):
        for i in range(2 ** self.H):
            for j in range(2 ** self.W):
                H_bar = [False] * self.H
                W_bar = [False] * self.W

                for n in range(H):
                    if (i & (2 ** n)) == 2 ** n:
                        H_bar[n] = True
                for n in range(W):
                    if (j & (2 ** n)) == 2 ** n:
                        W_bar[n] = True

                self.H_bar = H_bar
                self.W_bar = W_bar

                self.check()

    def check(self):
        black_count = 0
        for i in range(self.H):
            for j in range(self.W):
                if self.H_bar[i] or self.W_bar[j]:
                    continue
                if self.C[i][j] == "#":
                    black_count += 1
        if black_count == self.K:
            self.result += 1
 
H, W, K = map(int, input().split())

C = [ [None] * W for i in range(H) ]
for i in range(H):
    c_line = input()
    for j, c in enumerate(c_line):
        C[i][j] = c

handv = HandV(H, W, K, C)
handv.solve()
print(handv.result)
