// Kagami Mochi

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    sort(d.begin(), d.end(), greater<int>());

    int count = 1;

    int cur_width = d[0];
    for (int i = 1; i < n; i++) {
        if (cur_width > d[i]) {
            count++;
            cur_width = d[i];
        }
    }

    cout << count << endl;
}
