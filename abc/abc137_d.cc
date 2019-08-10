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

int N, M;

int main() {
    cin >> N >> M;
    vector < pair<int, int> > AB(N);

    int used[N];
    for (int i = 0; i < N; i++) {
        used[i] = 0;
    }

    int a, b;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        pair<int,int> p = make_pair(a, b);
        AB[i] = p;
    }

    sort(AB.begin(), AB.end());
    reverse(AB.begin(), AB.end());

    for (int i = 0; i < N; i++) {
        cout << AB[i].first << " " << AB[i].second << endl;
    }

    return 0;
}
