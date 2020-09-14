// Candy Distribution

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>
#include <numeric>
#include <math.h>
#include <limits.h>

using namespace std;

long long n, m;

int main() {
    cin >> n >> m;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // upper triangular matrix
    long long atm[n+10][n+10];

    for (int i = 0; i < n; i++) {
        atm[i][i] = a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            atm[i][j] = atm[i][j-1] + a[j];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (atm[i][j] % m == 0) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
