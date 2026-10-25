#include <bits/stdc++.h>
using namespace std;

string compress(const string& s) {
    string result;

    for (int i = 0; i < (int)s.size(); i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        unordered_set<string> results;

        // Operation 1: Do not flip any character.
        results.insert(compress(s));

        // Operation 2: Flip one internal character.
        for (int i = 1; i < (int)s.size() - 1; i++) {
            s[i] = (s[i] == '0') ? '1' : '0';

            results.insert(compress(s));

            // Restore the original character.
            s[i] = (s[i] == '0') ? '1' : '0';
        }

        cout << results.size() << '\n';
    }

    return 0;
}