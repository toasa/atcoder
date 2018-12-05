// Palace

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int t, a;
    cin >> n;
    cin >> t >> a;
    vector<int> h(n);
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    int diff = 1000000000;
    float tmp;
    int res_index = -1;
    for (int i = 1; i <= n; i++) {
        tmp = (float)(t - (h[i] * 0.006));
        if (abs(a - tmp) < diff) {
            diff = abs(a-tmp);
            res_index = i;
        }
    }

    cout << res_index << endl;
    return 0;
}
