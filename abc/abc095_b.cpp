// Bitter Alchemy

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
    int n, x;
    cin >> n >> x;
    vector<int> m(n);

    int min_gram = 9999999;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        if (m[i] < min_gram) {
            min_gram = m[i];
        }
        x -= m[i];
    }

    cout << n + (int)(x/min_gram) << endl;

    return 0;
}
