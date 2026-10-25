
#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;

    int cnt[4] = {};

    for(char c : s)
        if(c != '+')
            cnt[c - '0']++;

    bool first = true;

    for(int x = 1; x <= 3; x++) {
        while(cnt[x]--) {
            if(!first) std::cout << '+';
            std::cout << x;
            first = false;
        }
    }
}
