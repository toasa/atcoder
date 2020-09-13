def main():
    K = int(input())
    
    a_i = 7
    if a_i % K == 0:
        print(1)
        return

    for i in range(2, 10 ** 6+1):
        a_i = a_i * 10 + 7
        if a_i % K == 0:
            print(i)
            return
        a_i %= K
    print(-1)

main()
