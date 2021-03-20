N = int(input())

count = 0
int_map = {}

a = 2
while True:
    b = 2
    if a ** b > N:
        break
    while True:
        if a ** b > N:
            break
        if a**b in int_map:
            pass
        else:
            int_map[a**b] = True
            count += 1
        b += 1
    a += 1


print(N-count)
