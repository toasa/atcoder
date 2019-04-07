// Different Strokes

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>
#include <numeric>
#include <map>

using namespace std;

int n;

int main() {
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    vector<long long> sum(n);

    long long a_i, b_i;

    for (int i = 0; i < n; i++) {
        cin >> a_i >> b_i;
        a[i] = a_i;
        b[i] = b_i;
        sum[i] = a_i + b_i;
    }

    sort(sum.begin(), sum.end());
    reverse(sum.begin(), sum.end());

    long long res = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            res += sum[i];
        }
        res -= b[i];
    }

    cout << res << endl;

    return 0;
}
