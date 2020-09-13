S = input()
T = input()

result = 0
for i, s_c in enumerate(S):
    if s_c != T[i]:
        result += 1

print(result)

