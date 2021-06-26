S = input()

must = []
no = []
may = []

for i in range(10):
    if S[i] == "o":
        must.append(i)
    elif S[i] == "x":
        no.append(i)
    else:
        may.append(i)

must_bit = 0
for m in must:
    must_bit |= (1 << m)

count = 0
for i in range(10000):
    if must_bit & i != must_bit:
        continue

    s = str(i).zfill(4)
    if (int(s[0]) in no) or (int(s[1]) in no) or (int(s[2]) in no) or (int(s[3]) in no):
        continue
    count += 1

print(count)
