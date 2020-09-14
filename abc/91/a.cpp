// Two Coins

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
    int a, b, c;
    cin >> a >> b >> c;

    if (a+b >= c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}
