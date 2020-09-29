N = int(input())
S, T = input().split()

res = ""
for i, s in enumerate(S):
    res += s
    res += T[i]

print(res)
