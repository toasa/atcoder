// Strange Bank

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

int div_(int n, int d) {
    int count = 0;
    for (int p = 1; (n / (int)pow(d, p)) > 0; count++, p++) {

    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1, 0);

    for (int i = 1; i <= n; i++) {
        
    }


    // int res = 0;
    //
    // while (n >= 36) {
    //     n = min(n - (int)pow(9, div_(n, 9)), n - (int)pow(6, div_(n, 6)));
    //     res++;
    // }


    return 0;
}
