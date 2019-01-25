// Same Integers

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

    // 2 5 4
    // 2 4 5  :sort
    // 3 5 5  + 1 1 0
    // 5 5 5  + 2 0 0


    // 2 6 3
    // 2 3 6  :sort
    // 2 4 7  + 0 1 1

    // 4 4 7  + 1 1 0
    // 5 5 7  + 1 1 0
    // 6 6 7  + 1 1 0
    // 7 7 7  + 1 1 0

    sort(a.begin(), a.end());

    int res = 0;
    if (((a[1]-a[0]) % 2) != 0) {
        res++;
        a[1]++;
        a[2]++;
    }

    res += ((a[1] - a[0]) / 2);
    res += (a[2] - a[1]);
    cout << res << endl;

    return 0;
}
