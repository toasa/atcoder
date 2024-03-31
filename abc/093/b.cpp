// Small and Large Integers

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
    int a, b, k;
    cin >> a >> b >> k;

    // a = 3, b = 20, k = 5のとき
    // i = 3, 4, 5, 6, 7 ,  16, 17, 18, 19, 20

    for (int i = a; i <= b; i++) {
        if (i < a + k || b -k < i) {
            cout << i << endl;
        }
    }

    return 0;
}
