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
#include <utility>

using namespace std;

int main() {
    int n;
    cin >> n;    

    // -1: 未確定, 0: 白, 1: 黒
    vector<int> node(n, 0);

    vector <pair <pair<int, int>, int> > edge(n-1);
    

    for (int i = 0; i < n-1; i++) {
        int u, v;
        long w;
        cin >> u >> v >> w;
        edge[i].first.first = u;
        edge[i].first.second = v;
        edge[i].second = w;
    }

    sort(edge.begin(), edge.end());

    // for (int i = 0; i < n - 1; i++) {
    //     cout << edge[i].first.first << " " << edge[i].first.second << ": " << edge[i].second << endl;
    // }

    bool is_while = true;
    for (int i = 0; i < n; i++) {
        if (edge[i])
        cout << node[i] << endl;
    }

    return 0;
}
