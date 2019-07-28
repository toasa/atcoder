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

// bが二番目に小さいか否か
bool check(int a, int b, int c) {
    if ((a < b && b < c) || (c < b && b < a)) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int count = 0;

    for (int i = 1; i < n - 1; i++) {
        if (check(p[i - 1], p[i], p[i + 1])) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
