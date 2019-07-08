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

int n, d;

int dis(int *p, int *q) {
    int ret = 0;
    for (int i = 0; i < d; i++) {
        ret += (p[i] - q[i]) * (p[i] - q[i]);
    }
    return ret;
}

bool is_square_num(int num) {
    for (int i = 1; i <= 127; i++) {
        if (i * i == num) {
            return true;
        }
        if (num < i * i) {
            return false;
        }
    }
    return false;
}

int main() {
    cin >> n >> d;
    int points[n][d];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> points[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int distance = dis(points[i], points[j]);
            if (is_square_num(distance)) {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
