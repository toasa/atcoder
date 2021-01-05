class Str:
    def __init__(self, string, hasE):
        self.string = string
        self.hasE = hasE

    def __lt__(self, other):
        return self.string < other.string

def main():
    n = int(input())
    l = []
    for _ in range(n):
        s = input()
        if s[0] == '!':
            l.append(Str(s[1:], True))
        else:
            l.append(Str(s, False))
    l.sort()

    for i in range(n-1):
        s1 = l[i]
        s2 = l[i+1]
        if s1.string == s2.string and ((s1.hasE and (not s2.hasE)) or ((not s1.hasE) and (s2.hasE))):
            print(s1.string)
            return
    print("satisfiable")

main()
