// Touitsu

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
string a, b, c;

int main() {
    cin >> n >> a >> b >> c;

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i] && b[i] == c[i]) {
            continue;
        }
        if (a[i] != b[i] && b[i] != c[i] && c[i] != a[i]) {
            cnt += 2;
            continue;
        }
        cnt += 1;
    }

    cout << cnt << endl;

    return 0;
}
