// *3 or /2

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

int calc_div2(int n) {
    int ret = 0;
    while (n % 2 == 0) {
        ret++;
        n /= 2;
    }
    return ret;
}

int main() {
    cin >> n;
    vector<int> a(n);

    int res = 0;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        res += calc_div2(tmp);
    }
    cout << res << endl;

    return 0;
}
