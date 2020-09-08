#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

bool isParindrome(string s) {
    int head_idx = 0;
    int tail_idx = s.size() - 1;

    while(head_idx <= tail_idx) {
        if (s[head_idx] != s[tail_idx]) {
            return false;
        }
        head_idx++;
        tail_idx--;
    }
    return true;
}

int main() {
    // assert(isParindrome("lel"));
    // assert(!isParindrome("le"));
    // assert(isParindrome("e"));

    string S;
    cin >> S;
    int len = S.size();

    string head_str = S.substr(0, (len - 1) / 2);
    string tail_str = S.substr((len + 1) / 2, (len-1)/ 2);

    if (isParindrome(S) && isParindrome(head_str) && isParindrome(tail_str)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}