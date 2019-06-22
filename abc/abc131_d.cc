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

int main() {
    int n;    
    cin >> n;

    vector< pair<int, int> > W(n);

    for (int i = 0; i < n; i++) {
        cin >> W[i].second >> W[i].first;
    }

    sort(W.begin(), W.end());
    
    int time = 0;
    for (int i = 0; i < n; i++) {
        time += W[i].second;
        if (time > W[i].first) {
            cout << "No" << endl;
            return 0;
        }
        //cout << W[i].second << " " << W[i].first << endl;
    }
    cout << "Yes" << endl;

    return 0;
}
