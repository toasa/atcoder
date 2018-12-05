// 754

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int abs(int n) {
    if (n >= 0) {
        return n;
    }
    return -n;
}

int calc(string s) {
    int i = stoi(s);
    return abs(i - 753);
}

int main() {
    int res = 1000;
    string input;
    cin >> input;
    for (int i = 0; i < input.size() - 2; i++) {
        int n = calc(input.substr(i, 3));
        if (n < res) {
            res = n;
        }
    }
    cout << res << endl;

    return 0;
}
