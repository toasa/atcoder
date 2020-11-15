def ReLU(x):
    if x >= 0:
        return x
    return 0

x = int(input())
print(ReLU(x))
