#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long ans = n;

    while (n > 1) {
        long long p = 0;

        for (long long i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                p = i;
                break;
            }
        }

        // If n is prime, its smallest prime factor is n.
        if (p == 0) {
            p = n;
        }

        n /= p;
        ans += n;
    }

    cout << ans << '\n';

    return 0;
}