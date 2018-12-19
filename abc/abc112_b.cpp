// Time limit exceeded

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, T;
    cin >> n >> T;
    
    vector<int> c(n);
    vector<int> t(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i] >> t[i];
    }

    int cost = 1001;
    for (int i = 0; i < n; i++) {
        if (t[i] <= T) {
            if (c[i] < cost) {
                cost = c[i];
            }
        } else {
            continue;
        }
    }

    if (cost == 1001) {
        cout << "TLE" << endl;
    } else {
        cout << cost << endl;
    }

    return 0;
}
