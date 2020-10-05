N = int(input())
S = input()

res = 1
color = S[0]

for i in range(1, N):
    if S[i] != color:
        res += 1
        color = S[i]

print(res)

