class Alter:
    def __init__(self, N, C):
        self.N = N
        self.C = C

        whites = 0
        for c in C:
            if c == "W":
                whites += 1
        self.white_count = whites
        self.red_count = N - whites

    def solve(self):
        result = 0
        if self.white_count == self.red_count:
            for i in range(self.red_count):
                if self.C[i] == "W":
                    result += 1
            print(result)
        elif self.white_count > self.red_count:
            for i in range(self.red_count):
                if self.C[i] == "W":
                    result += 1
            print(result)
        else:
            for i in range(self.white_count):
                w_i = self.N - i - 1
                if self.C[w_i] == "R":
                    result += 1
            print(result)

N = int(input())

c_line = input()
C = [None] * N
for i, c in enumerate(c_line):
    C[i] = c

alter = Alter(N, C)
alter.solve()
