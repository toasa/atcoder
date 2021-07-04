class Human:
    def __init__(self, order, id_, candy):
        self.order = order
        self.id_ = id_
        self.candy = candy

N, K = map(int, input().split())
A = list(map(int, input().split()))

same_dist = K // N
remains = K % N

people = [None] * N
for i in range(N):
    people[i] = Human(i, A[i], same_dist)

people = sorted(people, key=lambda h: h.id_)

for i in range(remains):
    people[i].candy += 1

people = sorted(people, key=lambda h: h.order)

for h in people:
    print(h.candy)
