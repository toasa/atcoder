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

struct Node {
    int ID;
    vector<Node *> adjs;
    bool is_calculated;
    int value;

    static Node *new_node(int ID) {
        Node *n = new(Node);
        n->ID = ID;
        n->is_calculated = false;
        n->value = 0;
        return n;
    }
};

struct Tree {
    int N;
    int Q;
    vector<Node *> nodes;

    static Tree *new_tree(int N, int Q) {
        Tree *t = new(Tree);
        t->N = N;
        t->Q = Q;

        vector <Node *> nodes(N);
        for (int i = 0; i < N; i++) {
            nodes[i] = Node::new_node(i);
        }

        for (int i = 0; i < N - 1; i++) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            nodes[a]->adjs.push_back(nodes[b]);
            nodes[b]->adjs.push_back(nodes[a]);
        }
        for (int i = 0; i < Q; i++) {
            int p, x;
            cin >> p >> x;
            p--;
            nodes[p]->value += x;
        }
        t->nodes = nodes;

        return t;
    }

    static void walk(Node *node, int val) {
        node->value += val;
        node->is_calculated = true;
        int size = (node->adjs).size();
        for (int i = 0; i < size; i++) {
            Node *adj = node->adjs[i];
            if (!adj->is_calculated) {
                walk(adj, node->value);
            }
        }
    }

    static void result(Tree *t) {
        for (int i = 0; i < t->N; i++) {
            if (i == t->N - 1) {
                cout << t->nodes[i]->value << endl;
            } else {
                cout << t->nodes[i]->value << " ";
            }
        }
    }
};

int main() {
    int N, Q;
    cin >> N >> Q;
    Tree *t = Tree::new_tree(N, Q);
    t->walk(t->nodes[0], 0);
    Tree::result(t);

    return 0;
}
