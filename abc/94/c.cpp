// Cats and Dogs

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
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> x_0(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    x_0 = x;
    sort(x_0.begin(), x_0.end());
    int n1 = x_0[x_0.size()/2 - 1];
    int n2 = x_0[x_0.size()/2];

    for (int i = 0; i < n; i++) {
        if (n1 == n2) {
            cout << n1 << endl;
            continue;
        }
        if (x[i] <= n1) {
            cout << n2 << endl;
            continue;
        }
        if (n2 <= x[i]) {
            cout << n1 << endl;
            continue;
        }
    }

    return 0;
}
