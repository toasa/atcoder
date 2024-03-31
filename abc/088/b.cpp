// Card Game for Two

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << 0 % 2 << endl;
    cout << 1 % 2 << endl;
    cout << 2 % 2 << endl;
    cout << 3 % 2 << endl;
    cout << 4 % 2 << endl;

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    int alice = 0;
    int bob = 0;
    // choice
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    cout << alice - bob << endl;

    return 0;
}
