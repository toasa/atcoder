class Player:
    def __init__(self, index, rating):
        self.index = index
        self.rating = rating

N = int(input())
A = list(map(int, input().split()))

max_val = -1
for i in range(len(A)//2):
    if A[i] > max_val:
        max_val = A[i]
        player1 = Player(i+1, A[i])

max_val = -1
for i in range(len(A)//2, len(A)):
    if A[i] > max_val:
        max_val = A[i]
        player2 = Player(i+1, A[i])

if player1.rating < player2.rating:
    print(player1.index)
else:
    print(player2.index)

