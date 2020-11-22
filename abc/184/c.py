def main():
    r1, c1 = map(int, input().split())
    r2, c2 = map(int, input().split())

    if r1 == r2 and c1 == c2:
        print(0)
        return

    if (r1+c1) == (r2+c2) or (r1-c1) == (r2-c2) or (abs(r1-r2)+abs(c1-c2)<=3):
        print(1)
        return

    if (r1+c1)%2 == (r2+c2)%2:
        print(2)
        return

    grids = [(-3, 0), (-2, -1), (-2, 0), (-2, 1),
             (-1, -2), (-1, -1), (-1, 0), (-1, 1), (-1, 2),
             (0, -3), (0, -2), (0, -1), (0, 1), (0, 2), (0, 3),
             (1, -2), (1, -1), (1, 0), (1, 1), (1, 2),
             (2, -1), (2, 0), (2, 1), (3, 0)]

    for grid in grids:
        r1_ = r1 + grid[0]
        c1_ = c1 + grid[1]

        if (r1_+c1_) == (r2+c2) or (r1_-c1_) == (r2-c2):
            print(2)
            return

    print(3)

main()

