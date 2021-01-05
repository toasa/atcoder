N = int(input())

decimal_count = 0
octal_count = 0
decimal_octal_count = 0

for i in range(1, N+1):
    d_flag = False
    o_flag = False

    if '7' in str(i):
        decimal_count += 1
        d_flag = True

    if '7' in oct(i)[2:]:
        octal_count += 1
        o_flag = True
    
    if d_flag and o_flag:
        decimal_octal_count += 1

print(N - (decimal_count + octal_count) + decimal_octal_count)
