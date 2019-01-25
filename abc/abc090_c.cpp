// Flip,Flip, and Flip......

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
    int n, m;
    cin >> n >> m;

    if (n == 1 && m == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (n == 1) {
        cout << m - 2 << endl;
        return 0;
    }

    if (m == 1) {
        cout << n - 2 << endl;
        return 0;
    }

    int res_n, res_m;
    if (n - 2 < 0) {
        res_n = 0;
    } else {
        res_n = n - 2;
    }
    if (m - 2 < 0) {
        res_m = 0;
    } else {
        res_m = m - 2;
    }

    cout << res_n * res_m << endl;

    return 0;
}
