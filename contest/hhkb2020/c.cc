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
    bool B[200010];
    for (int i = 0; i < 200010; i++) {
        B[i] = false;
    }

    int cur_min = 0;
    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;
        B[p] = true;
        for (int j = cur_min; cur_min < 200002; j++) {
            if (!B[j]) {
                cur_min = j;
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}
