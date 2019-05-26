// 

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
    int a, b;
    cin >> a >> b;
    if (a >= 13) {
        cout << b << endl;
    } else if (6 <= a && a <= 12) {
        cout << b / 2 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
