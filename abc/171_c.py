def main():
    N = int(input())
    result = []
    
    while N > 0:
        N -= 1
        mod = N % 26
        result.append(chr(mod + ord('a')))
        N //= 26

    result_str = ""
    for i in range(len(result)-1, -1, -1):
        result_str += result[i]

    print(result_str)

main()
