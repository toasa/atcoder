// LCS

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

string s,t;

// dp[i+1][j+1]: sのi文字目までとtのj文字目までのLCSの長さ
int dp[3010][3010] = {0};

int main() {
    cin >> s >> t;
    int len_s = s.size();
    int len_t = t.size();

    for (int i = 0; i < len_s; i++) {
        for (int j = 0; j < len_t; j++) {
            if (s[i] == t[j]) {
                dp[i+1][j+1] = dp[i][j] + 1;
            } else {
                dp[i+1][j+1] = 
            }
        }
    }


    return 0;
}
