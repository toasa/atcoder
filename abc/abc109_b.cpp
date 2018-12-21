// Shiritori

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ios>
#include <iomanip>
#include <string>

using namespace std;

bool vector_finder(vector<string> words, string word) {
    auto itr = find(words.begin(), words.end(), word);
    if (itr != words.end()) { // 発見できたとき
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    string word;
    vector<string> words;

    cin >> n;

    bool result = true;

    cin >> word;
    char last_char = word[word.size() - 1];

    for (int i = 1; i < n; i++) {
        cin >> word;

        if (vector_finder(words, word)) {
            result = false;
        }
        if (word[0] != last_char) {
            result = false;
        }

        words.push_back(word);
        last_char = word[word.size() - 1];
    }

    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
