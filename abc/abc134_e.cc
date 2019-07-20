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

int main() {
    cin >> N;

    // 降順に並ぶ
    vector <int> A;

    int tmp;
    cin >> tmp;
    A.push_back(tmp);

    int decom_count = 1;
    for (int i = 1; i < N; i++) {
        cin >> tmp;
        if (A[0] < tmp) {
            A[0] = tmp;
        } else {
            if (tmp <= A[decom_count - 1]) {
                decom_count++;
                A.push_back(tmp);
            } else {
                for (int j = 1; j < decom_count - 1; j++) {
                    if (A[j] > tmp && tmp > A[j + 1]) {
                        A[j + 1] = tmp;
                    }
                }
            }
        }
    }

    cout << decom_count << endl;

    return 0;
}
