// 

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

    int min = 100001;
    int max = -1;
    int l, r;
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        if (l > max) {
            max = l;
        }
        if (r < min) {
            min = r;
        }
    }

    //cout << "max: " << max << endl;
    //cout << "min: " << min << endl;

    if (min - max >= 0) {
        cout << min - max + 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}