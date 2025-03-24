#include <vector>
#include <ranges>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> nums = {5, 2, 8, 1};
    std::ranges::sort(nums);

    for (int n : nums) std::cout << n << ' ';
}