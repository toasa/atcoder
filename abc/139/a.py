S = input()
T = input()

res = 0
for i, s in enumerate(S):
    if s == T[i]:
        res += 1
print(res)
