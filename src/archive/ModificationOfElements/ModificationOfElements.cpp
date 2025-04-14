#include <iostream>
#include <vector>
using namespace std;

auto main() -> int {
    auto nums = std::vector<int>(10);

    for (auto &num: nums) {
        std::cin >> num;
    }
    for (auto num: nums) {
        cout << num;

    }
}