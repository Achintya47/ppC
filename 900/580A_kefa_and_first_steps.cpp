#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int prev;
    std::cin >> prev;

    int currLen = 1;
    int maxLen = 1;

    for (int i = 1; i < n; i++) {
        int curr;
        std::cin >> curr;

        if (curr >= prev)
            currLen++;
        else
            currLen = 1;

        maxLen = std::max(maxLen, currLen);
        prev = curr;
    }

    std::cout << maxLen;
}