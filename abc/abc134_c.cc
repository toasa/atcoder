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
    int N;
    cin >> N;

    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;

    int max;
    int maxIndex;
    int quasiMax;

    if (tmp1 > tmp2) {
        max = tmp1;
        maxIndex = 0;
        quasiMax = tmp2;
    } else {
        max = tmp2;
        maxIndex = 1;
        quasiMax = tmp1;
    }

    for (int i = 2; i < N; i++) {
        cin >> tmp1;
        if (max <= tmp1) {
            maxIndex = i;
            quasiMax = max;
            max = tmp1;
        } else if (quasiMax <= tmp1 && tmp1 < max) {
            quasiMax = tmp1;
        }
    }

    for (int i = 0; i < N; i++) {
        if (i == maxIndex) {
            cout << quasiMax << endl;
        } else {
            cout << max << endl;
        }
    }

    return 0;
}
