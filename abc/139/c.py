N = int(input())
H = list(map(int, input().split()))

res = 0
cur_count = 0
cur_high = 0
for h in H:
    if h <= cur_high:
        cur_count += 1
        cur_high = h
    else:
        res = max(res, cur_count)
        cur_count = 0
        cur_high = h

res = max(res, cur_count)
print(res)
