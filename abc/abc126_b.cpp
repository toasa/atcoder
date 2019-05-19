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

bool is_month(int m) {
    return (1 <= m) && (m <= 12); 
}

int main() {
    int s;
    cin >> s;

    int head = s / 100;
    int tail = s % 100;

    bool is_YYMM = is_month(tail);
    bool is_MMYY = is_month(head);

    if (is_YYMM && is_MMYY) {
        cout << "AMBIGUOUS" << endl;
    } else if (is_YYMM && !is_MMYY) {
        cout << "YYMM" << endl;
    } else if (!is_YYMM && is_MMYY) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }

    return 0;
}
