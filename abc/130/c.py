W, H, x, y = map(int, input().split())

#  H +--------+
#    |        |
#    |   r2   |
#  y |---+----|
#    |   r1   |
#    +--------+
#  0     x    W


#  H +--------+
#    |   |    |
#    |   |    |
#  y | r3+ r4 |
#    |   |    |
#    +--------+
#  0     x    W

r1 = W * y
r2 = W * (H - y)

r3 = x * H
r4 = (W-x) * H

res = float(max(min(r1, r2), min(r3, r4)))
some_anss = 1 if min(r1, r2) == min(r3, r4) else 0

print(res, some_anss)

