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
int N;

bool isASD(int *p) {
    int tmp = p[0];
    for (int i = 1; i < N; i++) {
        if (tmp > p[i]) {
            return false;
        }
        tmp = p[i];
    }
    return true;
}

int main() {
    cin >> N;
    int p[N];
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    if (isASD(p)) {
        cout << "YES" << endl;
        return 0;
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (p[i] > p[j]) {
                int p_i = p[i];
                int p_j = p[j];

                p[i] = p_j;
                p[j] = p_i;

                if (isASD(p)) {
                    cout << "YES" << endl;
                    return 0;
                }
                p[i] = p_i;
                p[j] = p_j;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}
