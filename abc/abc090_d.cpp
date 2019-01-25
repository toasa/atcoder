// Remainder Reminder

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

int n, k;

int calc(int div) {
    int res = 0;

    if (n / (div - k) > 0) {
        res += (div - k) * (n / div);
    }

    res += ((n / div) - 1);

    return res;
}

int main() {

    cin >> n >> k;

    int res = 0;
    for (int i = k + 1; i <= n - 1; i++) {
        int tmp = calc(i);
        cout << "div: " << i << " num: " << tmp << endl;
        res += tmp;
    }

    cout << res << endl;

    return 0;
}
