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
    int A, B;
    cin >> A >> B;
    cout << retMax(A+B, A-B, A*B) << endl;

    return 0;
}
