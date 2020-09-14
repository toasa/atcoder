// Shiritori

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>

using namespace std;

int n;
vector<string> words;

int main() {
    cin >> n;

    bool res = true;
    string w;
    for (int i = 0; i < n; i++) {
        cin >> w;

        if (find(words.begin(), words.end(), w) != words.end()) {
            res = false;
            //break;
        };

        if (i > 0) {
            char c_tail = words[i-1][words[i-1].size() - 1];
            char c_head = w[0];
            if (c_tail != c_head) {
                res = false;
                //break;
            }
        }
        words.push_back(w);
    }

    if (res) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
