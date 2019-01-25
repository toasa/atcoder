// Add Sub Mul

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
    int a, b;
    cin >> a >> b;
    cout << max(max(a+b, a-b), a*b) << endl;

    return 0;
}
