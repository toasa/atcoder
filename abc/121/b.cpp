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

int n, m, c;

int main() {
    cin >> n >> m >> c;
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = c;
        for (int j = 0; j < m; j++) {
            int a_j;
            cin >> a_j;
            sum += a_j * b[j];
        }
        if (sum > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
