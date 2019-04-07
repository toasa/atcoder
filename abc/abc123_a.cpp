// Five Antennas

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
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    if (e - a <= k) {
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}
