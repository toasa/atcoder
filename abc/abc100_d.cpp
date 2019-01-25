// Patisserie ABC

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

int n, m;

int calc(vector<int> x, vector<int> y, vector<int> z, int i) {
    int sum = 0;
    if (i == 0) {
        for (int i = 0; i < n; i++) {
            sum += abs(x[i] + y[i] + z[i]);
        }
    } else if (i == 1) {
        for (int i = 0; i < n; i++) {
            sum += abs(x[i] + y[i] - z[i]);
        }
    } else if (i == 2) {
        for (int i = 0; i < n; i++) {
            sum += abs(x[i] - y[i] + z[i]);
        }
    } else if (i == 3) {
        for (int i = 0; i < n; i++) {
            sum += abs(x[i] - y[i] - z[i]);
        }
    } else if (i == 4) {
        for (int i = 0; i < n; i++) {
            sum += abs(-x[i] + y[i] + z[i]);
        }
    } else if (i == 5) {
        for (int i = 0; i < n; i++) {
            sum += abs(-x[i] + y[i] - z[i]);
        }
    } else if (i == 6) {
        for (int i = 0; i < n; i++) {
            sum += abs(-x[i] - y[i] + z[i]);
        }
    } else if (i == 7) {
        for (int i = 0; i < n; i++) {
            sum += abs(-x[i] - y[i] - z[i]);
        }
    }

    return sum;
}

int main() {
    cin >> n >> m;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    vector<int> res;
    for (int i = 0; i < 8; i++) {
        res.push_back(calc(x, y, z, i));
    }

    sort(res.begin(), res.end());

    cout << res[7] << endl;
    return 0;
}
