N = int(input())
A = list(map(int, input().split()))

total_mul = 1
for a in A:
    total_mul *= a

denom = 0
for a in A:
    denom += (total_mul // a)

print(total_mul / denom)

