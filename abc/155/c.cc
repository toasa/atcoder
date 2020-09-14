// Poll

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

int main() {
    int N;
    cin >> N;
    vector <string> S(N);
    map<string, int> S_map;

    int max_count = -1;
    // string max_str;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        S[i] = str;
        S_map[str] += 1;

        if (S_map[str] > max_count) {
            max_count = S_map[str];
            // max_str = str;
        }
    }
    sort(S.begin(), S.end());

    for (int i = 0; i < N; i++) {
        string str = S[i];
        if (S_map[str] != max_count) {
            continue;
        }

        int j = i + 1;
        if (j >= N) {
            cout << str << endl;
            return 0;
        }
        
        while (j < N && S[j] == str) {
            j++;
        }
        i = j - 1;
        cout << str << endl;
    }

    return 0;
}
