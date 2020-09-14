// Christmas Eve

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    int diff = 1000000000;
    for (int i = 0; i <= h.size() - k; i++) {
        if (h[i+k-1] - h[i] < diff) {
            diff = h[i+k-1] - h[i];
        }
    }

    cout << diff << endl;

    return 0;
}
