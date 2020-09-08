// Dividing a String

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
    string s;
    cin >> s;
    int len = s.size();

    int start = 0;
    string prev = s.substr(start, 1);
    int count = 1;


    start = 1;
    for (int i = 1; i <= len - start; i++) {
        string tmp = s.substr(start, i);
        if (prev != tmp) {

            // cout << "prev: " << prev << "  tmp: " << tmp << endl;
            prev = tmp;
            count++;
            start += i;
            i = 0;
        }
    }

    cout << count << endl;

    return 0;
}