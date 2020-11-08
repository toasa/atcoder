import math

def is_distinct(p1, p2, p3):
    if p1 == p2 or p2 == p3 or p3 == p1:
        return False
    return True

def on_same_line(p1, p2, p3):
    return (p3[1]-p1[1]) * (p2[0]-p1[0]) == (p2[1]-p1[1]) * (p3[0]-p1[0])

def main():
    N = int(input())
    points = []
    for _ in range(N):
        x, y = map(int, input().split())
        points.append((x,y))

    for i in range(N-2):
        for j in range(i+1, N-1):
            for k in range(j+1, N):
                p1 = points[i]
                p2 = points[j]
                p3 = points[k]

                if not is_distinct(p1, p2, p3):
                    continue

                if on_same_line(p1, p2, p3):
                    print("Yes")
                    return

    print("No")
    return

main()
