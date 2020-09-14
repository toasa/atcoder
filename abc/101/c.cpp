// Minimization

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

int n, k;

int main() {
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    int min_index = -1;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 1) {
            min_index = i;
        }
        a[i] = tmp;
    }

    int count = 0;
    // check left
    // 左にはmin_indexを含めてmin_index + 1個ある
    count += min_index / (k - 1);
    if (min_index % (k-1) != 0) {
        count++;
    }

    // check right
    count += ((n - min_index) - 1) / (k - 1);
    if (((n - min_index) - 1) % 2 != 0) {
        count++;
    }
    cout << count << endl;

    return 0;
}
