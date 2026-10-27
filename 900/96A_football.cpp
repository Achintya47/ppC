#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;

    int cnt = 0;
    char curr = '\0';

    for (char c : s) {
        if (c == curr) {
            cnt++;
        } else {
            curr = c;
            cnt = 1;
        }

        if (cnt >= 7) {
            std::cout << "YES";
            return 0;
        }
    }

    std::cout << "NO";
}