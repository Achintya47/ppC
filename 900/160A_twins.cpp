#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int nCoins;
    std::cin >> nCoins;

    std::vector<int> coins;
    int sum = 0;

    while (nCoins--) {
        int coin;
        std::cin >> coin;
        coins.push_back(coin);
        sum += coin;
    }

    sort(coins.rbegin(), coins.rend());

    int curSum = 0;
    int greedCoin = 0;

    for (int coin : coins) {
        curSum += coin;
        greedCoin++;

        if (curSum > sum - curSum) {
            std::cout << greedCoin;
            return 0;
        }
    }
}