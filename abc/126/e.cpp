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
    int n, m;
    cin >> n >> m;
    
    vector<int> X(m);
    vector<int> Y(m);
    vector<int> Z(m);
    for (int i = 0; i < m; i++) {
        cin >> X[i] >> Y[i] >> Z[i];
    }

    for (int i = 0; i < m; i++) {
        cout << X[i] << Y[i] << Z[i] << endl;
    }

    return 0;
}
