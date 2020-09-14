def manha(p1, p2):
    return abs(p1[0]-p2[0]) + abs(p1[1] - p2[1])

N = int(input())
x = [0] * N
y = [0] * N

for i in range(N):
    x_, y_ = map(int, input().split())
    x[i], y[i] = x_, y_

MAX = 0
MIN = 10 ** 10
x_min = MIN
y_min = MIN
x_max = MAX
y_max = MAX

x_min_p = None
y_min_p = None
x_max_p = None
y_max_p = None

for i in range(N):
    tmp_x = x[i]
    tmp_y = y[i]

    if tmp_x <= x_min:
        x_min_p = (tmp_x, tmp_y)
        x_min = tmp_x

    if x_max <= tmp_x:
        x_max_p = (tmp_x, tmp_y)
        x_max = tmp_x

    if tmp_y <= y_min:
        y_min_p = (tmp_x, tmp_y)
        y_min = tmp_y

    if y_max <= tmp_y:
        y_max_p = (tmp_x, tmp_y)
        y_max = tmp_y

result = max(manha(x_min_p, y_min_p), manha(x_min_p, x_max_p), manha(x_min_p, y_max_p), manha(y_min_p, y_max_p), manha(y_min_p, x_max_p), manha(y_max_p, x_max_p))
print(result)
