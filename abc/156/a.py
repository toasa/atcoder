N, hyoji = map(int, input().split())

if N >= 10:
    naibu = hyoji
else:
    naibu = hyoji + (100 * (10 - N))

print(naibu)
