#include <iostream>
#include <string>

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::string p, q;
    std::cin >> p >> q;

    int freq[26] = {};

    for (char c : p) freq[c - 'a']++;
    for (char c : q) freq[c - 'a']--;

    bool ok = true;

    for (int i = 0; i < 26; i++) {
        int expected = (i == 18 || i == 8 || i == 23) ? 1 : 0;

        if (freq[i] != expected) {
            ok = false;
            break;
        }
    }

    std::cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) solve();

    return 0;
}