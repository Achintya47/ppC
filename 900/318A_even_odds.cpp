#include <iostream>

int main() {
    long long n, k;
    std::cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if (k <= oddCount)
        std::cout << 2 * k - 1;
    else
        std::cout << 2 * (k - oddCount);

    return 0;
}