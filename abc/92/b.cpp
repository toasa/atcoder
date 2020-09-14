// Chocolate

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
    int n,d,x;
    cin >> n;
    cin >> d >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        x += ((d - 1) / a[i]) + 1;
    }

    cout << x << endl;

    return 0;
}
