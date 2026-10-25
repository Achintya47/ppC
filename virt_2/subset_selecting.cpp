#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        vector<int> freq(n + 1, 0);

        for (int x : a) {
            freq[x]++;
        }

        int ans = 0;
        int available = 0;

        for (int x = 0; x <= n; x++) {
            if (freq[x] == 0) 
                break;
            available += freq[x];

            if (available < k)
                break;
            available -= k;
            ans++;
        }

        cout << ans << '\n';

    }

    return 0;
}