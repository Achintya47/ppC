#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
int n, k;
cin >> n >> k;

vector<ll> a(n);
for (int i = 0; i < n; i++) {
    cin >> a[i];
}

ll ans = 0;

if (2 * k <= n) {
    // Middle elements are guaranteed to be removed.
    for (int i = k - 1; i <= n - k; i++) {
        ans += a[i];
    }

    // Choose the larger element from each symmetric pair.
    for (int i = 0; i < k - 1; i++) {
        ans += max(a[i], a[n - 1 - i]);
    }
} else {
    // Only the first n-k+1 symmetric pairs contribute.
    for (int i = 0; i < n - k + 1; i++) {
        ans += max(a[i], a[n - 1 - i]);
    }
}

cout << ans << '\n';

}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;

while (t--) {
    solve();
}

return 0;


}
