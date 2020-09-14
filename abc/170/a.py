x = list(map(int, input().split()))

for i, c in enumerate(x):
    if c == 0:
        print(i+1)
        break
