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

int N, D;

int main() {
    cin >> N >> D;
    if (N % (1 + 2 * D) == 0) {
        cout << N / (1 + 2 * D) << endl;
    } else {
        cout << N / (1 + 2 * D) + 1 << endl;
    }

    return 0;
}
