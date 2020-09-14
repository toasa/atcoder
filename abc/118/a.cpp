// A - B +/- A

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

int a, b;

int main() {
    cin >> a >> b;

    if (b % a == 0) {
        cout << a + b << endl;
    } else {
        cout << b - a << endl;
    }
    return 0;
}
