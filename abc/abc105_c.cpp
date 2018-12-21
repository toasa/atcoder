// Base -2 Number

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>
#include <numeric>
#include <math.h>

using namespace std;

int n;

void to_base2() {
    string ans = "";
    while (n > 0) {
        if (n % 2 == 0) {
            ans = "0" + ans;
        } else {
            ans = "1" + ans;
        }
        n >>= 1;
    }
    cout << ans << endl;
}

void to_base_minus2() {
    string ans = "";
    if (n == 0) {
        cout << 0 << endl;
        return;
    }
    
    while (n != 0) {
        if (n % 2 == 0) {
            ans = "0" + ans;
        } else {
            n--;
            ans = "1" + ans;
        }
        n /= -2;
    }
    cout << ans << endl;
}

int main() {
    cin >> n;

    to_base_minus2();
    return 0;
}
