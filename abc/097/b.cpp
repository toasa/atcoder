// Exponential

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

int x;

int pow_near(int b) {
    int i, ret;
    if (b == 1) {
        ret = 1;
    } else if ((int)pow(b, 2) <= x) {
        for (i = 2; (int)pow(b,i) <= x && x < (int)pow(b, i+1); i++) {}
        ret = pow(b, i);
    } else {
        ret = b;
    }
    return ret;
}

int main() {
    cin >> x;

    int res = 999999999;
    int res2;
    for (int i = 1; i < sqrt(x); i++) {
        int tmp = pow_near(i);
        if (tmp - x < res) {
            res = tmp - x;
            res2 = tmp;
        }
    }

    cout << res2 << endl;

    return 0;
}
