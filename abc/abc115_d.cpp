// Christmas

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// p: 1
// b: 0

void print_vec(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> level_up(vector<int> b0) {
    vector<int> b1;
    b1.push_back(0);
    for (int i = 0; i < b0.size(); i++) {
        b1.push_back(b0[i]);
    }

    b1.push_back(1);

    for (int i = 0; i < b0.size(); i++) {
        b1.push_back(b0[i]);
    }
    b1.push_back(0);

    return b1;
}

int count_patty(vector<int> v, int x) {
    int count = 0;
    for (int i = 0; i < x; i++) {
        if (v[i] == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, x;
    cin >> n >> x;

    vector< vector<int> > burgers;
    burgers.resize(n+1);
    burgers[0].resize(1);
    burgers[0][0] = 1;


    for (int i = 0; i < n; i++) {
        burgers[i+1] = level_up(burgers[i]);
    }

    cout << count_patty(burgers[n], x) << endl;

    return 0;
}
