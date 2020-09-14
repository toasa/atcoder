N = int(input())
L_n = list(map(int, input().split()))

result = 0
for i in range(0, N-2):
    for j in range(1, N-1):
        for k in range(2, N):
            l_i = L_n[i]
            l_j = L_n[j]
            l_k = L_n[k]

            if (l_i < l_j + l_k) and (l_j < l_k + l_i) and (l_k < l_i + l_j):
                print(l_i, l_j, l_k)
                result += 1

print(result)

