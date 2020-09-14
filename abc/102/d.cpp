// Equal Cut

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

int main() {
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int median;
    sort(a.begin(), a.end());

    if (a.size() % 2 == 0) {
        median = (a[a.size()/2] + a[a.size()/2 - 1]) / 2;
    } else {
        median = a[a.size()/2];
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        res += abs(a[i] - median);
    }
    cout << res << endl;

    return 0;
}
