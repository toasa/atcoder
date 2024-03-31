// Binomial Coefficients

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

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fact(n-1);
}

int comb(int a, int b) {
    return (int)(fact(a) / (fact(b) * fact(a-b)));
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int max = *(a.end()-1);

    int i, mid;
    if (n % 2 == 0) {
        for (i = 0; i < n; i++) {
            if (a[i] <= max/2 && max/2 <= a[i+1]) {
                mid = a[i];
                break;
            }
        }
    } else {
        for (i = 0; i < n; i++) {
            if (a[i] <= max/2 && max/2 <= a[i+1]) {
                mid = min(a[i+1], a[i+2]);
                break;
            }
        }
    }


    cout << max << " " << mid << endl;

    return 0;
}
