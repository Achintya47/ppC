#include <iostream>
#include <vector>
#include <math.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int nTests;
    std::cin >> nTests;

    int nTests_temp = nTests;

    std::vector<int> nums;

    while (nTests--) {
        int temp;
        std::cin >> temp;

        nums.push_back(temp);
    }

    int n_moves = 0;
    // let's do 1 based indexing, convert it to zero?
    for (int i = 1; i <= nums.size() - 1; i++) {
        int t = log2(nTests_temp - i);

        int incIndex = i + pow(2, t);

        n_moves += nums[i - 1];

        std::cout << n_moves << '\n';
        nums[incIndex - 1] += nums[i - 1];

    }

    return 0;
        
}