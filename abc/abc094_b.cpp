// Toll Gates

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
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(m, 0);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int i;
    // find a's index
    for (i = 0; i < m; i++) {
        if (a[i] < x && x < a[i+1]) {
            break;
        }
    }

    int res;
    if (i >= 2/m) {
        res = (m - i);
    } else {
        res = i;
    }

    cout << res << endl;
    return 0;
}
