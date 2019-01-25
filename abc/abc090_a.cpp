// Diagonal String

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
    string res = "";
    for (int i = 0; i < 9; i++) {
        char tmp;
        cin >> tmp;
        if (i == 0 || i == 4 || i == 8) {
            res += tmp;
        }
    }

    cout << res << endl;

    return 0;
}
