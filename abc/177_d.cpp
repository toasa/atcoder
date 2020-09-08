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

int main() {
    int N, M;
    cin >> N >> M;
    vector< vector<bool> > adj(N, vector<bool>(N));
    vector<int> friends_list(N, 1);

    int i;
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        if (!adj[a][b]) {
            friends_list[a] += 1;
        }
        if (!adj[b][a]) {
            friends_list[b] += 1;
        }

        adj[a][b] = true;
        adj[b][a] = true;
    }

    int max = 0;
    rep(i, N) {
        if (max < friends_list[i]) {
            max = friends_list[i];
        }
    }

    cout << max << endl;
}
