// Maximum Sum

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
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    int k;
    cin >> k;
    sort(a.begin(), a.end());

    for (int i = 0; i < k; i++) {
        a[2] *= 2;
    }

    cout << a[0] + a[1] + a[2] << endl;

    return 0;
}
