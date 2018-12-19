// AtCoder Beginner Contest 111

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>

using namespace std;

bool is_repdigit(int x) {
    int n_100 = x / 100;
    int n_10 = (x - 100 * n_100) / 10;
    int n_1 = (x - 100 * n_100 - 10 * n_10);

    if (n_100 == n_10 && n_10 == n_1) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int x;
    for (x = n; x <= 999; x++) {
        if (is_repdigit(x)) {
            break;
        }
    }

    cout << x << endl;
    return 0;
}
