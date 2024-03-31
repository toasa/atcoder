// One-stroke Path

// GCC 5.4.1 -> compile error
// Clang 3.8.0 -> AC

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

int n, m;

typedef struct NODE {
    vector<int> adj;
} Node;

Node *nodes;
// 3: src, 2: dst, 1: 到達済, 0: 未到達
char *node_map;

void init_node_map() {
    for (int i = 0; i <= n; i++) {
        node_map[i] = 0;
    }
}

bool is_bridge(int dst) {

    for (int i = 0; i < nodes[dst].adj.size(); i++) {
        int next = nodes[dst].adj[i];

        if (node_map[dst] == 2 && node_map[next] == 3) {
            continue;
        }

        // 既に訪れていた
        if (node_map[next] == 1 || node_map[next] == 2) {
            if (nodes[dst].adj.size() == 1) {
                break;
            }
            continue;
        }

        // loopが見つかった
        if (node_map[next] == 3) {
            return false;
        }

        node_map[next] = 1;

        if (is_bridge(next)) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n >> m;

    nodes = (Node *)malloc(sizeof(Node) * (n+1));
    node_map = (char *)malloc(sizeof(char) * (n+1));
    init_node_map();

    vector<int> srcs;
    vector<int> dsts;

    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        srcs.push_back(a);
        dsts.push_back(b);

        nodes[a].adj.push_back(b);
        nodes[b].adj.push_back(a);
    }

    int cnt = 0;

    for (int i = 0; i < m; i++) {
        int s = srcs[i];
        int d = dsts[i];

        node_map[s] = 3;
        node_map[d] = 2;

        if (is_bridge(d)) {
            cnt++;
        }
        init_node_map();
    }

    cout << cnt << endl;

    return 0;
}
