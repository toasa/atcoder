// Match Matching

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

int cost[10] = {0, 2, 5, 5, 4, 5, 6, 3, 7, 6};


int main() {
    cin >> n >> m;
    vector<int> a(9, 0);


    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        a[tmp-1]++;
    }

    int data[] = {1, 7, 4, 2, 3, 5, 6, 9, 8};
    vector<int> use_num(data, end(data));




    return 0;
}
