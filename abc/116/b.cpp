// Collatz Problem

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

int s;

int main() {
    cin >> s;

    int count = 0;

    if (s == 1 || s == 2) {
        cout << 4 << endl;
        return 0;
    }

    int tmp;
    int i = 1;
    for (;; i++) {
        if (s == 1) {
            break;
        }
        if (s % 2 == 0) {
            s /= 2;
        } else {
            s = 3*s + 1;
        }
    }

    cout << i + 1 << endl;
}
