// To Infinity

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

string s;
long k;

int main() {
    cin >> s;
    cin >> k;

    int one_conti = 0;
    for (int i = 0; s[i] == '1' && i < s.size(); i++) {
        one_conti++;
    }

    if (k <= one_conti) {
        cout << 1 << endl;
    } else {
        cout << s[one_conti] << endl;
    }



    return 0;
}
