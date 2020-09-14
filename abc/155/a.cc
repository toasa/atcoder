// Poor

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
    int A, B, C;
    cin >> A >> B >> C;
    
    if ((A == B) && (B != C)) {
        cout << "Yes" << endl;
        return 0;
    }

    if ((A != B) && (B == C)) {
        cout << "Yes" << endl;
        return 0;
    }

    if ((A == C) && (B != A)) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
