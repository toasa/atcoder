// Subscribers

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

int n, a, b;

int main() {
    cin >> n >> a >> b;

    if (a + b <= n) {
        cout << min(a, b) << " " << 0 << endl;
    } else {
        cout << min(a, b) << " " << a + b - n << endl;
    }

    return 0;
}
