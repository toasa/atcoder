N = int(input())
S = input()

def rot(c, n):
    i = ord(c) - ord('A')
    i += n
    i %= 26
    return chr(i + ord('A'))

res = ""
for c in S:
    res += rot(c, N)

print(res)
