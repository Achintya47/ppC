// 750A
#include <iostream>
constexpr int total_time = 240;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int k;

    std::cin >> n >> k;

    // BUG 1
    int remain_time = total_time - k;

    int n_prob = 0;

    // BUG 2, din check whether we're solving more problems than there
    // possibly are, which was dumb
    while (n_prob < n && (n_prob + 1) * 5 <= remain_time) {
        remain_time -= (++n_prob) * 5; 
    }

    std::cout << n_prob;

    return 0;
}