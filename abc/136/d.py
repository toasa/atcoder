S = input()
N = len(S)

RL_nbhd = [0] * N

l_count = 0
i = 0
while i < N:
    if S[i] == "R":
        if S[i+1] == "L":
            l_count = 0
            i += 2
            continue
    else:
        l_count += 1
        RL_nbhd[i] = l_count
    i += 1

r_count = 0
i = N-1
while i >= 0:
    if S[i] == "L":
        if S[i-1] == "R":
            r_count = 0
            i -= 2
            continue
    else:
        r_count += 1
        RL_nbhd[i] = r_count
    i -= 1

children = [0] * N
for i, n in enumerate(RL_nbhd):
    if S[i] == "R":
        if n % 2 == 0:
            children[i + n] += 1
        else:
            children[i + 1 + n] += 1
    else:
        if n % 2 == 0:
            children[i - n] += 1
        else:
            children[i - n - 1] += 1

for i, n in enumerate(children):
    if i == N - 1:
        print(n)
    else:
        print(str(n) + " ", end="")
