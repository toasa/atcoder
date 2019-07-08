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

int n, a, b;

int main() {
    cin >> n >> a >> b;
    int min;
    if (n * a < b) {
        min = n * a;
    } else {
        min = b;
    }

    cout << min << endl;

    return 0;
}
