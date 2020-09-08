// Papers, Please

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

bool isDivideBy3or5(int n) {
    return (n % 3 == 0) || (n % 5 == 0);
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    // int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        int num = A[i];
        if (num % 2 == 1) {
            continue;
        }
        if (!isDivideBy3or5(num)) {
            cout << "DENIED" << endl;
            return 0;
        }
    }
    cout << "APPROVED" << endl;
    return 0;
}
