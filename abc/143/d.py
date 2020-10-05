def can_constitute_tri(a, b, c):
    return (a < b + c) and (b < c + a) and (c < a + b)

N = int(input())
L = list(map(int, input().split()))

L = sorted(L)

res = 0

for i in range(1, N-1):
    for j in range(i+1, N):
        sub_L = L[:i]
        min_i = 0
        max_i = i
        while abs(max_i - min_i) > 1:
            mid_i = (min_i + max_i) // 2
            if can_constitute_tri(L[mid_i], L[i], L[j]):
                max_i = mid_i
            else:
                min_i = mid_i

        if can_constitute_tri(L[min_i], L[i], L[j]):
            res += i - min_i
        elif can_constitute_tri(L[max_i], L[i], L[j]):
            res += i - max_i

print(res)

