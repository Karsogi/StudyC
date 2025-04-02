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
    auto vec = vector<int>{2,1,-100,10,5};
    MinMaxSwapped(vec);
    for (auto element: vec) {
        cout << element;
    }
}