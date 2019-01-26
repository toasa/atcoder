import math

def lcm(a, b):
    return int(a * b / math.gcd(a, b))

n = int(input())

list = [int(input()) for i in range(n)]

def main():
    if n == 1:
        print(list[0])
        return

    num = list[0]
    for i in range(1, n):
        if num % list[i] == 0:
            continue
        elif list[i] % num == 0:
            num = list[i]
            continue
        else:
            num = lcm(num, list[i])

    print(num)
    return

main()
