// /\/\/\/

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
    int n;
    cin >> n;
    vector<int> odds(100010, 0);
    vector<int> evens(100010, 0);

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (i % 2 == 0) {
            evens.push_back(tmp);
        } else {
            odds.push_back(tmp);
        }
    }

    sort(evens.begin(), evens.end());
    reverse(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());
    reverse(odds.begin(), odds.end());

}
