#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    char *S = (char *)calloc(1, n + 1);
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c == '0' || c == '1' || c == '8')
            S[n-(i+1)] = c;
        else if (c == '6')
            S[n-(i+1)] = '9';
        else
            S[n-(i+1)] = '6';
    }
    printf("%s\n", S);
}
