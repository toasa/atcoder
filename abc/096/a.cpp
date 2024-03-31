// Day of Takahashi

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

    int res = 0;
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 31; j++) {
            if (i == j) {
                res++;
            }
            if (i == a && j == b) {
                break;
            }
        }
        if (i == a) {
            break;
        }
    }

    cout << res << endl;

    return 0;
}
