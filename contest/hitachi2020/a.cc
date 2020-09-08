// 

// g++ -std=c++11 abc145_c.cc && ./a.out 
#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
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

int main() {
    string S;
    cin >> S;
    int i;

    if (S.length() % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }

    bool is_hitachi = true;
    for (i = 0; i < S.length(); i += 2) {
        if (S[i] != 'h') {
            is_hitachi = false;
            break;
        }
    }
    for (i = 1; i < S.length(); i += 2) {
        if (S[i] != 'i') {
            is_hitachi = false;
            break;
        }
    }
    if (is_hitachi) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}
