// *3 or /2

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

int main() {
    int d, n;
    cin >> d >> n;

    if (d == 0) {
        if (n == 100) {
            cout << 101 << endl;
        } else {
            cout << n << endl;
        }
    } else if (d == 1) {
        if (n == 100) {
            cout << 10100 << endl;
        } else {
            cout << 100 * n << endl;
        }
    } else {
        if (n == 100) {
            cout << 1010000 << endl;
        } else {
            cout << 10000 * n << endl;
        }
    }
    return 0;
}
