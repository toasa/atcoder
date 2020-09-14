// Foods Loved by Everyone

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

int n, m;

int main() {
    cin >> n >> m;
    vector<int> a(m, 0);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int tmp;
        for (int j = 0; j < k; j++) {
            cin >> tmp;
            a[tmp-1]++;
        }
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] == n) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
