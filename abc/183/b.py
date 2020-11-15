S_x, S_y, G_x, G_y = map(int, input().split())

res = S_y * ((G_x-S_x) / (G_y+S_y)) + S_x
print(res)
