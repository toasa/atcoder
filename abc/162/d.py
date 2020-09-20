def check_RGB(c1, c2, c3):
    l = [c1, c2, c3]
    return ("R" in l) and ("G" in l) and ("B" in l)
    
N = int(input())
S = input()

R, G, B = 0, 0, 0
for i, s in enumerate(S):
    if s == "R":
        R += 1
    elif s == "G":
        G += 1
    else:
        B += 1

result = R * G * B

width = 1
while width * 2 < N:
    i = 0
    first = i
    mid = i + width
    last = i + width*2

    while last < N:
        if check_RGB(S[first], S[mid], S[last]):
            result -= 1

        i += 1
        first = i
        mid = i + width
        last = i + width*2

    width += 1

print(result)
