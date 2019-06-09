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

int abs(int a, int b) {
    if (a < b) {
        return b - a;
    }
    return a - b;
}

int main() {
    int n;
    cin >> n;
    int W[n];
    for (int i = 0; i < n; i++) {
        cin >> W[i];
    }

    // T = 0 .. n-2

    int head = 0;
    int tail = 0;
    int min = 294967294;

    for (int T = 0; T < n - 1; T++) {
        for (int i = 0; i <= T; i++) {
            head += W[i];
        }
        for (int j = T + 1; j < n; j++) {
            tail += W[j];
        }
        if (abs(head, tail) < min) {
            min = abs(head, tail);
        }
        head = 0;
        tail = 0;
    }

    cout << min << endl;

    return 0;
}
