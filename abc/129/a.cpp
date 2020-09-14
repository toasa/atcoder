// 

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
    int p, q, r;
    cin >> p >> q >> r;
    int min = 300;
    if (p + q < min) {
        min = p + q;
    }
    if (p + r < min) {
        min = p + r;
    }
    if (q + r < min) {
        min = q + r;
    }
    cout << min << endl;

    return 0;
}
