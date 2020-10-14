S = input()
T = input()

if S == 'Y':
    c = ord(T) + ord('A') - ord('a')
    print(chr(c))
else:
    print(T)
