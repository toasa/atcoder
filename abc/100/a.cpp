// Happy Birthday!

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

    if (a <= 8 && b <= 8) {
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}
