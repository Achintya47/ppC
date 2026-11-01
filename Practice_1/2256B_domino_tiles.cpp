#include <bits/stdc++.h>
using namespace std;

void solve() {
int n;
cin >> n;

string s;
cin >> s;

int ans = 0;

// Enumerate possible assignments of the first min(n, 2) positions.
int limit = (n == 1 ? 2 : 4);

for (int mask = 0; mask < limit; mask++) {
    string t(n, '0');

    t[0] = (mask & 1) ? '1' : '0';

    if (n >= 2)
        t[1] = (mask & 2) ? '1' : '0';

    // Generate the remaining string.
    for (int i = 2; i < n; i++) {
        t[i] = (t[i - 2] == '0' ? '1' : '0');
    }

    // Check compatibility with the original string.
    bool valid = true;

    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != t[i]) {
            valid = false;
            break;
        }
    }

    if (valid)
        ans++;
}

cout << ans << '\n';

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
    solve();
}

return 0;


}
