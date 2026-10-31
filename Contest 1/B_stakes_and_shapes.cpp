#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int n = a + b + c;

    if (a >= b && a >= c) {
        cout << string(n, 'P') << '\n';
    }
    else if (b >= a && b >= c) {
        cout << string(n, 'R') << '\n';
    }
    else {
        cout << string(n, 'S') << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}