// Pair

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
    int k;
    cin >> k;

    int even, odd;
    if (k % 2 == 0) {
        even = k / 2;
        odd = k / 2;
    } else {
        even = (k - 1) / 2;
        odd = (k - 1) / 2 + 1;
    }

    cout << even * odd << endl;

    return 0;
}
