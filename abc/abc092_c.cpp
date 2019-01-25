// Traveling Plan

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
    vector<int> a(n+2, 0);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += abs(a[i-1] - a[i]);
    }
    sum += abs(a[n] - a[n+1]);

    int res = 0;
    for (int i = 1; i < n+1; i++) {
        cout << sum - abs(a[i+1] - a[i]) - abs(a[i] - a[i-1]) + abs(a[i+1] - a[i-1]) << endl;
    }

    return 0;
}
