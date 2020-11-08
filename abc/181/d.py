def check():
    S = input()
    if len(S) == 1:
        return int(S) == 8
    elif len(S) == 2:
        n = int(S)
        revn = int(S[::-1])
        
        muls = [16,24,32,48,56,64,72,88,96]
        for m in muls:
            if m == n or m == revn:
                return True
        return False

    # assume that length of S is equal or greater than three.
    digit_map = [False] * 10
    for c in S:
        digit_map[int(c)] = True

    l = [104 ,112 ,120 ,128 ,136 ,144 ,152 ,160 ,168 ,176 ,184 ,192 ,200 ,208 ,216
        ,224 ,232 ,240 ,248 ,256 ,264 ,272 ,280 ,288 ,296 ,304 ,312 ,320 ,328 ,336
        ,344 ,352 ,360 ,368 ,376 ,384 ,392 ,400 ,408 ,416 ,424 ,432 ,440 ,448 ,456
        ,464 ,472 ,480 ,488 ,496 ,504 ,512 ,520 ,528 ,536 ,544 ,552 ,560 ,568 ,576
        ,584 ,592 ,600 ,608 ,616 ,624 ,632 ,640 ,648 ,656 ,664 ,672 ,680 ,688 ,696
        ,704 ,712 ,720 ,728 ,736 ,744 ,752 ,760 ,768 ,776 ,784 ,792 ,800 ,808 ,816
        ,824 ,832 ,840 ,848 ,856 ,864 ,872 ,880 ,888 ,896 ,904 ,912 ,920 ,928 ,936
        ,944 ,952 ,960 ,968 ,976 ,984 ,992]

    for n in l:
        n1 = int(str(n)[0])
        n2 = int(str(n)[1])
        n3 = int(str(n)[2])

        if n1 == 0 or n2 == 0 or n3 == 0:
            continue

        if digit_map[n1] and digit_map[n2] and digit_map[n3]:
            return True
    return False

def main():
    if check():
        print("Yes")
    else:
        print("No")

main()
