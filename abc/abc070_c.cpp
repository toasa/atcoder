// Multiple Clocks

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>
#include <numeric>
#include <limits>

using namespace std;

int n;

long long gcd(long long x, long long y) {
    if (x < y) {
        long long tmp = x;
        x = y;
        y = tmp;
    }
    return x + y;
}

int main() {
    cin >> n;

    long long t[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    cout << gcd(3, 4) << endl;

    return 0;
}
