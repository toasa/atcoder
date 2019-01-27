// Different Strokes

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

typedef pair<int,int> ipair;
bool lessPair(const ipair& l, const ipair& r){return l.second < r.second;}
bool greaterPair(const ipair& l, const ipair& r){return l.second > r.second;}

int n;

int main() {
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    vector<long long> sum(n);

    map <long long, int> sum2index;

    long long a_i, b_i;

    vector<ipair> index_sum;
    for (int i = 0; i < n; i++) {
        cin >> a_i >> b_i;
        a[i] = a_i;
        b[i] = b_i;
        sum[i] = a_i + b_i;
        index_sum.push_back(ipair(i, sum[i]));
        sort(index_sum.begin(), index_sum.end(), greaterPair);
        sum2index[sum[i]] = i;
    }

    for (vector<ipair>::iterator it = index_sum.begin(); it != index_sum.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }


    // sort(sum.begin(), sum.end());
    // reverse(sum.begin(), sum.end());
    //
    // long long taka_happy = 0;
    // long long aoki_happy = 0;
    //
    // for (int i = 0; i < n; i++) {
    //     int index = sum2index[sum[i]];
    //     if (i % 2 == 0) {
    //         // takahashi's turn
    //         taka_happy += a[index];
    //     } else {
    //         aoki_happy += b[index];
    //     }
    // }
    //
    // cout << taka_happy - aoki_happy << endl;

    return 0;
}
