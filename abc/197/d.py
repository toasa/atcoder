import numpy as np

N = int(input())
x_0, y_0 = map(int, input().split())
x_mid, y_mid = map(int, input().split())

tyuten_x = abs(x_0 + x_mid) / 2
tyuten_y = abs(y_0 + y_mid) / 2

# tyuten は必ず第一象限にある

x_0_slide = x_0 - tyuten_x
y_0_slide = y_0 - tyuten_y

u = (x_0_slide, y_0_slide)
t = np.deg2rad(360/N)

R = np.array([[np.cos(t), -np.sin(t)],
              [np.sin(t),  np.cos(t)]])

res = np.dot(R, u)
print(res[0]+tyuten_x, res[1]+tyuten_y)
