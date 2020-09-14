// ABC333

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int a , b;
    cin >> a >> b;
    bool result = false;
    if (a % 2 != 0 && b % 2 != 0) {
        result = true;
    }

    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
