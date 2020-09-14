// Otoshidama

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    int tens = pow(10, 3);
    if (y % tens != 0) {
        cout << "-1 -1 -1" << endl;
        return 0;
    }
    y /= tens;

    for (int n_10 = 0; n_10 <= n && n_10*10 <= y; n_10++) {
        for (int n_5 = 0; n_10+n_5 <= n && n_10*10 + n_5*5 <= y; n_5++) {
            for (int n_1 = 0; n_10+n_5+n_1 <= n && n_10*10 + n_5*5 + n_1*1 <= y; n_1++) {
                if (n_10 + n_5 + n_1 == n && n_10*10 + n_5*5 + n_1*1 == y) {
                    cout << n_10 << " " << n_5 << " " << n_1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "-1 -1 -1" << endl;

    return 0;
}
