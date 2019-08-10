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
#include <map>

using namespace std;
int N;

string arr2str(int A[26]) {
    string res = "";
    for (int i = 0; i < 26; i++) {
        res += to_string(A[i]);
    }
    return res;
}

int main() {
    long long count = 0;

    cin >> N;
    string strs[N];
    for (int i = 0; i < N; i++) {
        cin >> strs[i];
    }

    int memo[N][26];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 26; j++) {
            memo[i][j] = 0;
        }
    }

    
    for (int i = 0; i < N; i++) {
        string str = strs[i];
        for (int j = 0; j < 10; j++) {
            memo[i][str[j] - 'a']++;
        }
    }

    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < 26; j++) {
    //         cout << memo[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    map<string, long long> m;
    for (int i = 0; i < N; i++) {
        string s = arr2str(memo[i]);
        m[s]++;
    }

    for (auto i = m.begin(); i != m.end() ; ++i ) {
        long long n = i -> second;
        if (n > 1) {
            count += (n * (n - 1) / 2);
        }
    }

    cout << count << endl;

    return 0;
}
