#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> MinMaxSwapped(vector<int> &vec) {
    auto const maxIter = std::ranges::max_element(vec);
    auto const minIter = std::ranges::min_element(vec);
    ranges::swap(*minIter, *maxIter);
    return vec;
}

auto main() -> int {
    auto vec = vector<int>{1, 2, 3, 4, 5, 6};
    MinMaxSwapped(vec);
    for (auto element: vec) {
        cout << element;
    }
}