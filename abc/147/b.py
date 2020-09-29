S = input()

l = len(S)

if l % 2 == 0:
    head = S[:l//2]
    tail = S[l//2:]
else:
    head = S[:l//2]
    tail = S[l//2+1:]

tail = tail[::-1]

res = 0
for i, c1 in enumerate(head):
    c2 = tail[i]
    if c1 != c2:
        res += 1

print(res)

