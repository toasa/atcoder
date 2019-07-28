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
    int A[N+1];
    int B[N];

    for (int i = 0; i < N + 1; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] - B[i] >= 0) {
            count += B[i];
        } else {
            count += A[i];
            int tmp = B[i] - A[i];
            if (A[i + 1] - tmp > 0) {
                A[i + 1] -= tmp;
                count += tmp;
            } else {
                count += A[i + 1];
                A[i + 1] = 0;
            }
        }
    }

    cout << count << endl;

    return 0;
}
