N, X = map(int, input().split())
A = list(map(int, input().split()))

removed = list(filter(lambda x: x != X, A))
print(*removed)
