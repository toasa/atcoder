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

int reach(int n, int dst) {
    int count = 0;
    for (; n < dst; count++) {
        n *= 2;
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;

    double ans = 0.0;
    for (int i = 1; i <= n; i++) {
        //double tmp = (1.0 / (double)n) * pow(0.5, reach(i, k));
        //cout << i << ": " << tmp << endl;
        ans += (1.0 / (double)n) * pow(0.5, reach(i, k));
    }

    cout << setprecision(12) << ans << endl;

    return 0;
}
