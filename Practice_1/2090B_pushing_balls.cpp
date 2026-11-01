#include <iostream>
#include <vector>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<std::string> grid(n);

        for (int i = 0; i < n; i++) {
            std::cin >> grid[i];
        }

        bool ok = true;

        for (int i = 1; i < n && ok; i++) {
            for (int j = 1; j < m; j++) {
                if (grid[i][j] == '1' &&
                    grid[i - 1][j] == '0' &&
                    grid[i][j - 1] == '0') {
                    ok = false;
                    break;
                }
            }
        }

        std::cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}