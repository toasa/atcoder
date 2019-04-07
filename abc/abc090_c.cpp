// Flip,Flip, and Flip......

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
    int n, m;
    cin >> n >> m;

    if (n == 1 || m == 1) {
        if (n == 1 && m != 1) {
            cout << m - 2 << endl;
            return 0;
        }
        if (n != 1 && m == 1) {
            cout << n - 2 << endl;
            return 0;
        }
        // n == 1 && m == 1
        cout << 1 << endl;
        return 0;
    }

    if (n == 2 || m == 2) {
        cout << 0 << endl;
        return 0;
    }

    int res_n = 0;
    int res_m = 0;

    if (n == 3) {
        res_n = 3;
    } else if (n > 3) {
        res_n = n - 2;
    }
    if (m == 3) {
        res_m = 3;
    } else if (m > 3) {
        res_m = m - 2;
    }

    cout << res_n * res_m << endl;

    return 0;
}




// +-------------------+
// | -1|  8|  2|  3| -3| 0
// |---+---+---+---+---|
// | -2|  3| -4| -6|  2| 1
// |---+---+---+---+---|
// |  5|  @| -8|  6|  4| 2
// |---+---+---+---+---|
// |  1| -1|  1| -3|  7| 3
// |---+---+---+---+---|
// |  9| -2| -5| -9| -7| 4
// +-------------------+
//   0   1   2   3   4
