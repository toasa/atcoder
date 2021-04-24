N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A_max = -1
for a in A:
    A_max = max(a, A_max)

B_min = 1010
for b in B:
    B_min = min(b, B_min)

if B_min >= A_max:
    print(B_min - A_max + 1)
else:
    print(0)
