K = int(input())
S = input()

if len(S) <= K:
    print(S)
else:
    sub_S = S[:K] + "..."
    print(sub_S)
