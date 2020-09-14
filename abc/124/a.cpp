// button

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
    int a, b;
    cin >> a >> b;

    int res = 0;
    if (a >= b) {
        res += a;
        a--;
    } else {
        res += b;
        b--;
    }

    if (a >= b) {
        res += a;
    } else {
        res += b;
    }

    cout << res << endl;

    return 0;
}
