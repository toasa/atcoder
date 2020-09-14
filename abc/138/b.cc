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
    int n;
    cin >> n;
    int A[n];
    int tmp;
    int mul = 1;
    float denominator = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mul *= tmp;
        A[i] = tmp;
    }

    for (int i = 0; i < n; i++) {
        denominator += ((float)mul / (float)A[i]);
    }

    cout << (float)mul / denominator << endl;

    return 0;
}
