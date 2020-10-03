// Triangular Relationship

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

int main() {
    cin >> n >> k;

    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (((2 * i) % k) == 0) {
            res++;
        }
    }
    res *= 3;

    cout << res << endl;

    return 0;
}
