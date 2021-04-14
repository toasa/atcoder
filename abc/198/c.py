import math

def main():
    R, X, Y = map(int, input().split())
    d = math.sqrt(X**2 + Y**2)
    if (d.is_integer() and int(d % R) == 0):
        print(int(d // R))
        return

    if d < R:
        print(int(d//R) + 2)
    else:
        print(int(d//R) + 1)

main()
