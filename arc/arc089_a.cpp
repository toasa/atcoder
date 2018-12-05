// Traveling

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int n;
int t[100000];
int x[100000];
int y[100000];

int abs(int n) {
    if (n >= 0) {
        return n;
    } else {
        return -n;
    }
}

bool reachable(int cur_t, int cur_x, int cur_y, int dst_t, int dst_x, int dst_y) {
    int dx = abs(cur_x - dst_x);
    int dy = abs(cur_y - dst_y);
    int dt = dst_t - cur_t;
    if ((dx + dy <= dt) && ((dt - (dx + dy)) % 2 == 0)) {
        return true;
    } else {
        return false;
    }
}

bool walk(int cur_t, int cur_x, int cur_y) {
    for (int i = 0; i < n; i++) {
        if (reachable(cur_t, cur_x, cur_y, t[i], x[i], y[i])) {
            // cout << t[i] - cur_t << "s" << endl;
            // cout << "(" << cur_x << ", " << cur_y << ") -> (" << x[i] << ", " << y[i] << ")" << endl;
            cur_t = t[i];
            cur_x = x[i];
            cur_y = y[i];
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    if (walk(0, 0, 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
