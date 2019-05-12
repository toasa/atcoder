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
    int r, g, b ,n;
    cin >> r >> g >> b >> n;
    // r * i + g * j + b * k == n
    int res = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int tmp = n - (r * i + g * j);
            if ((tmp  >= 0) && (tmp % b == 0)) {
                //printf("(%d, %d, %d)\n", i, j, tmp / b);
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
