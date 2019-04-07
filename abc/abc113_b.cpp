// Palace

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

int n;
int t, a;

float calc_temp(int h) {
    return t - h * 0.006;
}
int main() {
    cin >> n;
    cin >> t >> a;

    int h;
    float diff = 10000000;

    int res;
    for (int i = 0; i < n; i++) {
        cin >> h;
        if (abs(calc_temp(h) - a) < diff) {
            diff = abs(calc_temp(h) - a);
            res = i + 1;
        }
    }
    cout << res << endl;

    return 0;
}
