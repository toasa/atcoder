N, K, Q = map(int, input().split())

people = [K] * N
for _ in range(Q):
    a = int(input())
    people[a-1] += 1

for i in range(N):
    people[i] -= Q

for p in people:
    print("Yes" if p > 0 else "No")


