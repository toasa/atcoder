S = input()
T = input()

len_s = len(S)
len_t = len(T)

result = len_t
i = 0

while (i <= len_s - len_t):
    diff = 0
    for j, c in enumerate(T):
        if (c != S[i + j]):
            diff += 1
    result = min(result, diff)
    i += 1

print(result)

