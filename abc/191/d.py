import math

def dis(p1, p2):
    return math.sqrt((p1[0]-p2[0])**2 + (p1[1]-p2[1])**2)

X, Y, R = map(float, input().split())

r_u = [math.floor(X+R), math.floor(Y+R)]
l_u = [math.ceil(X-R), math.floor(Y+R)]
l_d = [math.ceil(X-R), math.ceil(Y-R)]
r_d = [math.floor(X+R), math.ceil(Y-R)]

count = (r_u[0] - l_u[0] + 1) * (r_u[1] - r_d[1] + 1)

d_ru = dis(r_u, [X, Y])
d_lu = dis(l_u, [X, Y])
d_rd = dis(r_d, [X, Y])
d_ld = dis(l_d, [X, Y])

if d_ru > R:
    count -= math.ceil(d_ru - R)

if dis(l_u, [X, Y]) > R:
    count -= math.ceil(d_lu - R)

if dis(r_d, [X, Y]) > R:
    count -= math.ceil(d_rd - R)

if dis(l_d, [X, Y]) > R:
    count -= math.ceil(d_ld - R)

print(count)
