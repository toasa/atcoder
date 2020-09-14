// Grand Garden

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

int n;
int main() {
    cin >> n;
    vector<int> h(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int res = 0;

    int tmp_min = 100000000;
    for (int i = 0; i < n; i++) {
        if (h[i] == 0) {
            continue;
        }
        while (h[i] != 0) {
            int j;
            for (j = i; h[j] != 0 && j < n; j++) {
                if (h[j] < tmp_min) {
                    tmp_min = h[j];
                }
            }
            for (int k = i; k < j; k++) {
                h[k] -= tmp_min;
            }
            res += tmp_min;
        }

    }

    cout << res << endl;

    return 0;
}
