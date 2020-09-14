// XXOR

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

long long n, k;

int calc_bin_digit(long long n) {
    for (int i = 1; i < n; i++) {
        if (pow(2,i) <= n && n < pow(2, i+1)) {
            return i+1;
        }
    }
    return 0;
}

int main() {
    cin >> n >> k;
    vector<long long> a(n);
    long long tmp = 0;

    long long max = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
        tmp ^= a[i];
    }

    if (calc_bin_digit(k) <= calc_bin_digit(max)) {
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res += tmp ^ a[i];
        }
        cout << res << endl;
    } else {
        int k_digit = calc_bin_digit(k);
        int max_digit = calc_bin_digit(max);
        long long d =(pow(2, k_digit) - 1) - (pow(2, max_digit) -1);
        tmp ^= d;
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res += tmp ^ a[i];
        }
        cout << res << endl;
    }


    return 0;
}
