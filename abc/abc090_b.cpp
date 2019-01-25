// Palindromic Numbers

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>
#include <numeric>

using namespace std;

bool is_palidr(string str, int len) {
    bool res = true;

    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len - i - 1]) {
            res = false;
            return res;
        }
    }

    // 回文の場合
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;

    int res = 0;
    for (int i = stoi(a); i <= stoi(b); i++) {
        if (is_palidr(to_string(i), to_string(i).size())) {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}
