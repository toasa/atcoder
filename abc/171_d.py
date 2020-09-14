N = int(input())
A = list(map(int, input().split()))
Q = int(input())

# 値がiであるようなA_iの個数を格納する
val_count = [0] * (10 ** 5 + 1)

total_A = 0
for a in A:
    total_A += a
    val_count[a] += 1

S = []
for i in range(Q):
    B, C = map(int, input().split())
    B_count = val_count[B]
    total_A -= B * B_count
    total_A += C * B_count
    S.append(total_A)

    val_count[B] = 0
    val_count[C] += B_count

for s in S:
    print(s)
