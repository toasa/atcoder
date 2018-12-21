// Rated for Me

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
    int r;
    cin >> r;
    if (r < 1200) {
        cout << "ABC" << endl;
    } else if (r < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }


    return 0;
}
