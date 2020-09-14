// Christmas Eve Eve

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];

    int max_price = 0;
    int max_price_index = -1;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] > max_price) {
            max_price_index = i;
            max_price = p[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i == max_price_index) {
            sum += (p[i] / 2);
            continue;
        }
        sum += p[i];
    }

    cout << sum << endl;

    return 0;
}
